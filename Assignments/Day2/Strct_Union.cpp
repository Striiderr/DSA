#include<iostream>
using namespace std;
union U{
   char cno[10];
   int hno;
};
struct s {
	int rno;
	int tag;
	U arr;
	};

int main(){
struct s *S[5];

for(int i=0;i<5;i++){
   S[i]=new(s);
   cout<<"Enter Roll No:";
  cin>>S[i]->rno;
  cout<<"Enter 'O' for cno or '1' for House No:";
  cin>>S[i]->tag;
  if(S[i]->tag==0){
  	cout<<"Enter 10 CHaracter's cno:";
       for(int t=0;t<10;t++){
    	cin>>S[i]->arr.cno[t];
                          }}
  else if(S[i]->tag==1){
  	cout<<"Enter House No:";
    cin>>S[i]->arr.hno;
  }    
cout<<"^^^^^^^^^^^^^\n"<<endl;
  }



for(int i=0;i<5;i++){
  cout<<"Roll No:"<<S[i]->rno<<endl;
  if(S[i]->tag==0){
  	cout<<"cno:";
    for(int t=0;t<10;t++){
    	cout<<S[i]->arr.cno[t];
                          }
  }
  else if(S[i]->tag==1){
  cout<<"House No:";
   cout<<S[i]->arr.hno;
  }    
cout<<"\n*************"<<endl;
  }

return 0;
}


