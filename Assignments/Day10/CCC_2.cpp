#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for (int i = a; i <= b; i++)

struct node{
  int data;
  struct node *next;};  typedef struct node *nptr;


void createll(nptr &P){
	int n;
    nptr T,N;
	cin>>n;
	T=new(node);
    T->data=n;T->next=NULL;
    P=T;
	cin>>n;
	if(n!=-1)
   {
	   while(n!=-1)
	   {
		  N=new(node);
	      N->data=n; N->next=NULL;
	      cin>>n;
	      T->next=N; T=T->next;
	    }
	}
}
void print(struct node *P){
  if(P!=NULL)
   {
    cout<<P->data<<" ";
    print(P->next); 
  }}

void delVal(struct node *&P,int k){
   if(P->data==k){
   P=P->next;
   return;
   }
   struct node *T;
   T=P;
  while(T!=NULL){
  if(T->next->data==k){
       T->next=T->next->next;
       return;
  }
  T=T->next;
   }
 }

int count(nptr P){
     int k=0;
     while(P!=NULL){
     k++;
    P=P->next;
      } 
    return k+1;
    }

 void recrt(nptr P){ 

  nptr S,T,Q;
  int n=count(S);
  while(n>0){

  S=P; int u=n-1;  
  while(u>0){
   S=S->next;   
    u--;
  }
 
  int a=S->data,i=0,c=0;
  cout<<"\n"<<a<<" ";
    
     T=S;
   
while(i<a){
  
  if(T==NULL) {c=1;}
  
  T=T->next;
  i++;
  
  }
if(c==0){
  delVal(T,T->data);
}
 n--;
   }



 }

int main()
{
nptr L;
createll(L);

recrt(L);

print(L);


return 0;

}