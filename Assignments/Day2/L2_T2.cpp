#include<iostream>
#include<deque>
#include<queue>

using namespace std;
union U{
   char c;
   int i;
};
deque<U> dequ;
deque<int> ta;
queue<U> q;
int main(){
   
 U u[10]={'E', 17, 'S', 'C', 9, 'T', 20, 'I', 21,'N'};
 int tag[10]={1,0,1,1,0,1,0,1,0,1}	;
 int tag1[10];
 int t=0;
 for(int j=0;j<10;j++){
  if(tag[j]==0){

  	dequ.push_back(u[j]);
  	ta.push_back(0);
  }
  else {
  	dequ.push_front(u[j]);
  	ta.push_front(1);
  tag1[t]=1;
  	t++;
  }
 }int n=ta.front();
   ta.pop_front();
   int cu=0;
 while(n==1){
    U s=dequ[cu];
    cu++;
    dequ.pop_front();
    q.push(s);
    n=ta.front();
    ta.pop_front();
  }
while(!q.empty()){
    U sy=q.front();
    q.pop();
    dequ.push_back(sy);
    ta.push_back(1);
  }

 cout << "deque elements are: ";
    for (int j = 0; j < dequ.size(); ++j) {
       int cn=ta.front();
       ta.pop_front();
       if(j<4){
        cout << dequ[j].i << " ";
    }
    else
      cout << dequ[j].c << " ";
    }
    cout << endl;
}