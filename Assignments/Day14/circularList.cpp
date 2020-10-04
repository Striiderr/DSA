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

void cretdln(dlptr &S,int N){
S=new(dlnode);
S->left=NULL;
int n=0;
S->data=n;
S->right=NULL;
dlptr T;
dlptr P,Q;
P=S;Q=S;
n++;
while(n<N-1){
T=new(dlnode);
T->left=P;
T->data=n;
T->right=NULL;
P->right=T;P=P->right;
n++;
}
Q->left=P;
P->right=S;
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

int c=0;
void op(dlptr P,int k,int x,int y){
 int u=k;
if(P->data==x){
    c++;
}
if(c==2){
  cout<<"No";
  return;
}

if(P->data==y){
    cout<<"Yes";
    return;
}
else{
 while(u--){
     P=P->right;
 }
 op(P,k,x,y);
}

}

int main(){
int n,k,x,y;
cin>>n>>k>>x>>y;
dlptr P;
cretdln(P,n);
printcl(P);
dlptr S=P;
 while(x--){
     S=S->right;
 }
//op(S,k,x,y);

}