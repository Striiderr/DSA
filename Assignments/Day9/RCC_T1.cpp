#include<bits/stdc++.h>
using namespace std;

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
	}}

void print(struct node *P){
	if(P!=NULL)
   {
	  cout<<P->data<<" ";
	  print(P->next); 
	}}


void Delf(nptr &P){
 	P=P->next;
    return;}

void LunionS(nptr A,nptr B,nptr &S){
	nptr L,T,Q;
	L=new(node);   
    L->data=1;L->next=NULL;	
	S=L;int a,b;  

	while(A->next!=NULL && B->next!=NULL)
	{
     	A->data=a;B->data=b;
        
        A=A->next; 
        if(A->next->data > B->next->data)
        {
           T=new(node);
           T->data=a;T->next=NULL;
           Q=new(node);
           Q->data=A->next->data;Q->next=NULL;
           T->next=Q;
           L->next=T; L=L->next->next;
           A=A->next->next; 
        }
          else if(A->next->data < B->next->data)
        {
            T=new(node);
           T->data=b;T->next=NULL;
           Q=new(node);
           Q->data=B->next->data;Q->next=NULL;
           T->next=Q;
           L->next=T; L=L->next->next;
           B=B->next->next;
        }
    	else
    	{
    	   T=new(node);
           T->data=a+b;T->next=NULL;
           Q=new(node);
           Q->data=B->next->data;Q->next=NULL;
           T->next=Q;
           L->next=T; L=L->next->next;
           B=B->next->next;
           A=A->next->next; 
        }
	while(A->next!=NULL)
	{
      Q=new(node);
      Q->data=A->next->data;Q->next=NULL;
      T=new(node);
      T->data=a;T->next=Q;
      L->next=T; L=L->next->next;
      A=A->next->next; 
	}

	while(B!=NULL)
	{
        Q=new(node);
        Q->data=B->next->data;Q->next=NULL;
        T=new(node);
        T->data=b;T->next=Q;
        L->next=T; L=L->next->next;
        B=B->next->next; 
	}
    }
	Delf(S);
   
}


	int main(){
  nptr L1,L2,L3;
  createll(L1);
  //print(L1);
  createll(L2);   
  //print(L2);
  LunionS(L1,L2,L3);
  print(L3);
		return 0;
	}
