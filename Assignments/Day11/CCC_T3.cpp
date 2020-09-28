#include<iostream>
using namespace std;
struct node{
  int data;
  struct node *next;};  typedef struct node *nptr;

void Delf(nptr &P){
 	P=P->next;
    return;}

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
	}}

void print(struct node *P){
	if(P!=NULL)
   {
	  cout<<P->data<<" ";
	  print(P->next); 
	}}
int count(nptr P){
     int k=0;
     while(P!=NULL){
     k++;
    P=P->next;
      } 
    return k+1;
    }
  
void connect(nptr A,nptr B)
{
 while(A->data!=6){
  A=A->next;
 }
while(B->next!=NULL){
  B=B->next;
}
B->next=A;

}

int check(nptr B,int t)
{
   while(t>0){
B=B->next;
    t--;
   }
 return B->data;
 
 
}

int main(){
    
   nptr L1,L2;
   createll(L1);
   createll(L2);
   int t=count(L2);
   connect(L1,L2);
 
 int v=check(L2,t-1);
 cout<<v<<"\n";

   
    
    
    return 0;
}
