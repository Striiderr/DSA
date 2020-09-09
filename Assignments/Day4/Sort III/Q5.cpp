#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *x, int *y){

  int t;
  t=*x;
  *x=*y;
  *y=t;
}
void Merg(int a[],int n1,int b[],int n2){
  
int w=0;int u=0;
  while(w<n1){
    if(a[w]!=0){
      a[u]=a[w];
      u++;
    }
    w++;
  }

 int x=0,y=0;
 while(x<u){
    if(a[x]>=b[y]){
    //	cout<<"\n"<<a[x]<<" "<<b[y];
    	swap(&a[x],&b[y]);  x++;
    	sort(b,b+n2);
    }
    else {
          x++;
    }
}

while(y<n2){
  a[x]=b[y];
  y++;x++;
   
}
}
int main(){
int a[9]={0, 2, 0, 3, 0, 5, 6, 0, 0},b[5]={ 1, 8, 9, 10, 15};
int n1=9,n2=5;

Merg(a,n1,b,n2);

for(int i=0;i<9;i++){
	cout<<a[i]<<" ";
}

	return 0;
}