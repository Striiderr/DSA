#include<iostream>
using namespace std;
struct dlnode{
dlnode *left;
int data;
dlnode *right;
};typedef struct dlnode* dlptr;

void swap ( int* a, int* b )  
{
int t = *a; 
*a = *b; 
*b = t;
 }  

void cretdln(dlptr &S,int total){
S=new(dlnode);
S->left=NULL;
int n;
cin>>n;
S->data=n;
S->right=NULL;
dlptr T;
dlptr P,Q;
P=S;Q=S;
int i=1;
while(i<total){
cin>>n;
T=new(dlnode);
T->left=P;
T->data=n;
T->right=NULL;
P->right=T;P=P->right;
i++;
}
Q->left=P;
P->right=S;
}

void delk(dlptr &P, int k){
 dlptr S=P;
    while ((S->data!=k))
{
    S=S->right;
}
S->left->right=S->right;
S->right->left=S->left;

}
void print(dlptr SP,dlptr FP,int c){
if(SP==FP){
    c++;}
if(c==2){ 
return;}
else{
cout<<SP->data<<" ";
print(SP->right,FP->right->right,c);
}}

void printcl(dlptr P){
dlptr SP,FP;SP=P;FP=P; int c=0;
print(SP,FP,c);
}



int count(dlptr P){
dlptr SP,FP;
SP=P;FP=P;
int c=0,i=0;
while(true){
if(SP==FP)
c++;
if(c==2){
    break;
}
else{
SP=SP->right;
FP=FP->right->right;
i++;
}
}
return i;
}

void oprn(dlptr S, int m){
dlptr P=S;int i;
while(count(P)!=1){
   // cout<<count(P)<<"\n";
i=m-1;
while(i>0){
P=P->right;
    i--;
}
int t=P->data;
cout<<t<<" ";
P=P->right;
delk(S,t);
//printcl(S);
//cout<<"\n";
}}


int main(){

dlptr P;
int total;
cin>>total;
cretdln(P,total);
int m;cin>>m;
oprn(P,m);



}