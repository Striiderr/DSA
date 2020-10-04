#include<iostream>
#include<queue>
#include<vector>
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

void cretdln(dlptr &S){
S=new(dlnode);
S->left=NULL;
int n;
cin>>n;
S->data=n;
S->right=NULL;
dlptr T;
dlptr P,Q;
P=S;Q=S;
cin>>n;
while(n!=-1){
T=new(dlnode);
T->left=P;
T->data=n;
T->right=NULL;
P->right=T;P=P->right;
cin>>n;
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

bool in(vector<int> v, int n){
for(int i=0;i<v.size();i++){
    if(n==v[i]){
    return true;
}}
return false;
}

void oprn(dlptr P){
    vector<int> v;int p=0;
dlptr SP,sp,fp,FP,S;
SP=P;FP=NULL;
while(SP!=FP){
    if(FP==NULL)
    FP=P; 
S=SP;
queue<int> q;
while(!q.empty()){
    q.pop();
}
int r=S->data;
q.push(r);
sp=S;
fp=NULL;
int c=0;
while(sp!=fp){
    if(sp==S)
    if(in(v,sp->data)){
        //cout<<sp->data;
        break;
    }
  //cout<<sp->data<<" ";
    if(fp==NULL)
      fp=S;
sp=sp->right;
q.push(sp->data);
fp=fp->right->right;

if(sp->data==r){
    if(c==1||sp!=fp)
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();  
c=1;
p=1;
}
if(p==1)
cout<<"\n";
p=0;
q.push(r);
}  }
v.push_back(SP->data);
SP=SP->right;
FP=FP->right->right;
}
}




int main(){

dlptr P;
cretdln(P);
oprn(P);


}