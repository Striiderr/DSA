#include<iostream>
using namespace std;
struct node{
  int data;
  struct node *next;};  typedef struct node *nptr;
void swap(int &a,int &b){
int  t=x;
x=y;
y=t;
}

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
void sort(nptr A,int x){

nptr Q;
Q=A;



}
int main(){
   nptr L;
   createll(L);
   rec(L);
   print(L);
    return 0;
}
