#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for (int i = a; i <= b; i++)

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

void LintrS(nptr A,nptr B,nptr &S){
	nptr L,T;
	L=new(node);   
    L->data=1;L->next=NULL;	
	S=L;    
	while(A!=NULL)
	{

	    while(B!=NULL)
	    {
	    	if(A->data < B->data)
	    		break;
     	    if(A->data == B->data)
    	    {
    	 	    T=new(node);
         		T->data=B->data;T->next=NULL;
         		L->next=T; L=L->next;
         		break;
    	    }
    	    B=B->next;
        }
        A=A->next;
	}

	Delf(S);}

void Lintr(nptr A,nptr B,nptr &S){
	nptr L,T,Q;
	L=new(node);   
    L->data=1;L->next=NULL;	
	S=L;  
    Q=B;
	while(A!=NULL)
	{
	    while(Q!=NULL)
	    {
     	    if(A->data == Q->data)
    	    {
    	 	    T=new(node);
         		T->data=Q->data;T->next=NULL;
         		L->next=T; L=L->next;
         		break;
    	    }
    	    Q=Q->next;
        }
           
        A=A->next;
        Q=B;
	}

	Delf(S);}

void LunionS(nptr A,nptr B,nptr &S){
	nptr L,T;
	L=new(node);
    if(A->data > B->data)
    {
    	L->data=B->data;L->next=NULL;B=B->next;
    }
    else
    	L->data=A->data;L->next=NULL;A=A->next;
	
	S=L;

	while(A!=NULL && B!=NULL)
	{
     	if(A->data > B->data)
    	{
    	 	T=new(node);
         	T->data=B->data;T->next=NULL;
         	B=B->next;
         	L->next=T; L=L->next;

    	}
    	if(A->data == B->data)
    	{
    	 	T=new(node);
         	T->data=B->data;T->next=NULL;
         	B=B->next; A=A->next;
         	L->next=T; L=L->next;

    	}
    	else
    	{
    	 T=new(node);
         T->data=A->data;T->next=NULL;
         A=A->next;
         L->next=T; L=L->next;

    	}

	}

	while(A!=NULL)
	{
       T=new(node);
       T->data=A->data;T->next=NULL;
       A=A->next;
       L->next=T; L=L->next;
	}

	while(B!=NULL)
	{
    	T=new(node);
       	T->data=B->data;T->next=NULL;
        B=B->next;
        L->next=T; L=L->next;   
	}}

void Lunion(nptr A,nptr B,nptr &S){
    nptr L,Q,T;
    L=new(node);Q=new(node);
	L->data=A->data;L->next=NULL;A=A->next;
	S=L;

	while(A!=NULL)
	{
     T=new(node);
     T->data=A->data;T->next=NULL;
     L->next=T;L=L->next;
     A=A->next;
	} 
    
	Q=S;int c;
	while(B!=NULL)
	{
		c=0;
		while(Q!=NULL)
		{
            if(Q->data==B->data)
            {
                c=1;
            }
            Q=Q->next;
		}
		if(c==0)
		{
			T=new(node);
     		T->data=B->data;T->next=NULL;
     		L->next=T;L=L->next;	
		}
		B=B->next;
        Q=S;
	}}

void diff(nptr A,nptr B,nptr &S){
	nptr L,T;
	S=new(node);L=new(node);
    	L->data=(A->data) - (B->data); L->next=NULL;A=A->next;B=B->next;
	S=L;
    while(A!=NULL && B!=NULL)
    {
       T=new(node);
       T->data=(A->data) - (B->data); T->next=NULL;
       L->next=T; L=L->next;
       A=A->next; B=B->next; 
    }}

void Difft(nptr A,nptr B,nptr &S)
{
	nptr L,T,Q;
	L=new(node);   
    L->data=1;L->next=NULL;	
	S=L;  
	Q=B;
	int c;
	while(A!=NULL)
	{
		c=0;
	    while(Q!=NULL)
	    {
     	    if(A->data == Q->data)
    	    {
    	     c=1;
    	    }
    	    Q=Q->next;
        }
        if(c==0)
        {
        T=new(node);
        T->data=A->data;T->next=NULL;
        L->next=T; L=L->next;
        }   
        A=A->next;
        Q=B;
	}

	Delf(S);  
}


int main()
{
	nptr L1,L2,L3;
	createll(L1);
	createll(L2);
    LunionS(L1,L2,L3);
    print(L3);
    LintrS(L1,L2,L3);
    print(L3);
    Difft(L1,L2,L3);
    print(L3);
    createll(L1);
	createll(L2);
    Lunion(L1,L2,L3);
    print(L3);
    Lintr(L1,L2,L3);
    print(L3);
    Difft(L1,L2,L3);
    print(L3);
}
