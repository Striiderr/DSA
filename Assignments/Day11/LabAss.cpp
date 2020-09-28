#include<iostream>
using namespace std;
struct node{
  int data;
  struct node *next;}; 
   typedef struct node *nptr;
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

int pop(nptr &A){

//while(A->next->next!=NULL){
  //A=A->next;
//}
int t=A->data;
A=A->next;
return t;

}

void push(nptr &P, int a){
nptr T=new(node);
T->data=a;T->next=P;
P=T;

}

void enque(nptr A,int a){

while(A->next!=NULL){
  A=A->next;
}
nptr T=new(node);
T->data=a;T->next=NULL;
A->next=T;
}

int deque(nptr &A){
int t=A->data;
A=A->next;

  return t;
}

int main(){
    
   nptr L;
   L=new(node);
   L->data=7;L->next=NULL;
   push(L,1);
   push(L,2);
   push(L,3);
   push(L,5);
   push(L,7);
   push(L,9);
   print(L);
   cout<<"\n";
   pop(L);
   pop(L);
   pop(L);
   pop(L);
   pop(L);
   pop(L);
   print(L);
   cout<<"\n";
   enque(L,1);
   enque(L,2);
   enque(L,3);
   enque(L,4);
   enque(L,7);
   enque(L,8);
   enque(L,9);
   print(L);
   cout<<"\n";
   deque(L);
   deque(L);
   deque(L);
   deque(L);
   deque(L);
   deque(L);
   deque(L);

   print(L);
   cout<<"\n";
    
    return 0;
}

