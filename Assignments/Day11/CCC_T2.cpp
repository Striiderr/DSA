
#include<iostream>
using namespace std;
struct node{
  int data;
  struct node *next;};  typedef struct node *nptr;

void Delf(nptr &P){
 	P=P->next;
    return;}

void createll(nptr &P,int a){
	int n;
    nptr T,N;
	n=a/10;
	a=a%10;
	T=new(node);
    T->data=n;T->next=NULL;
    P=T;
	n=a/10;
	a=a%10;
	if(n!=-1)
   {
	   while(n!=-1)
	   {
		  N=new(node);
	      N->data=n; N->next=NULL;
	      n=a/10;
		  a=a%10;
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


void sum(nptr A,nptr B,nptr L){
    nptr P;
     if(A==NULL){
     	return;
     }   
     else{
   int c;
   c=A->data+B->data;
   P=new(node);
   P->data=c; P->next=NULL;
   L->next=P;L=L->next;
   sum(A->next,B->next,L);
     }

}

int main(){
    int a,b,c;
    cin>>a>>b;

   nptr L1,L2,L3;
   createll(L1,a);
   createll(L2,b);
   L3=new(node);
   L3->data=1;L3->next=NULL;
   sum(L1,L2,L3);
    Delf(L3);
   print(L3);
    
    return 0;
}
