#include<iostream>
using namespace std;
struct node{

int data;
node* next;
}
int main{
node *L,*T,*P;
L=new(node);
int n;
cin>>n;
L->data=n;
L-.next=NULL;
while(n>0){
T=new(node);
T->data=n;
T->next=NULL;
P=L;
while(P->next!=NULL){
P->next=T;
}
cin>>n;
}

P=L;
while(P!=NULL)
	P=P->next;
cout<<P->data;
P=P->next;       
}

