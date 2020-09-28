#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for (int i = a; i <= b; i++)
union U{
  int i; 
  char c;
};
struct node{
  U data;
  struct node *next;};  typedef struct node *nptr;

void Delf(nptr &P){
 	P=P->next;
    return;}
    int tag[100],no=0;

void createll(nptr &P){
	int x,t;
	char y;
    nptr T,N;
	cin>>t;
	tag[no]=t;
	if(t==1){
	    cin>>x;
	}
	else
	cin>>y;
	
	T=new(node);
	if(t==1){
    T->data.i=x;T->next=NULL;}
    else
    T->data.c=y;T->next=NULL;
    P=T;
	cin>>t;
	tag[no]=t;
	if(t==0){
	   while(y!='#')
	   {
		  N=new(node);
	      N->data.c=y; N->next=NULL;
	      cin>>t;
	      tag[no]=t;
	      if(t==1){
	    cin>>x;
                 	}
        	else
            	cin>>y;
	      
	      T->next=N; T=T->next;
	    }
	}
	else{
	     N=new(node);
	      N->data.i=x; N->next=NULL;
	      cin>>t;
	      tag[no]=t;
	      if(t==1){
	    cin>>x;
                 	}
        	else
            	cin>>y;
	      
	      T->next=N; T=T->next;
	}
	}
int a=0;
void print(struct node *P){

	if(P!=NULL)
   { 
       if(tag[a]==1){
	  cout<<P->data.i<<" ";a++;}
	  else{
	  cout<<P->data.c<<" ";a++;}
	  
	  print(P->next); 
	}}




int main()
{
	nptr L1;
	createll(L1);
	print(L1);

}
