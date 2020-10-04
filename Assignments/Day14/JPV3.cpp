#include<iostream>
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

void cretdln(dlptr &S,int total){
S=new(dlnode);
S->left=NULL;
int n=0;
n++;
S->data=n;
S->right=NULL;
dlptr T;
dlptr P,Q;
P=S;Q=S;
int i=1;
while(i<total){
n++;
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

void delfront(dlptr &S){
S->right->left=NULL;
S=S->right;
}

void delk(dlptr &P, int k){
 if(P->data==k){
      delfront(P);
      return;
  }

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



vector<int> oprn(dlptr S,int n){
    vector<int> v;
    v.resize(n);
fill(v.begin(), v.end(), 0);
int m;cin>>m;
dlptr P=NULL;int i;
n=n/2;
while(n>0){
    i=m;

while(i>0){
    if(P==NULL){
    P=S;
    }
    else{
    P=P->right;
    }
    i--;

}
v.push_back(P->data);
//cout<<P->data<<vno<<" ";
delk(S,P->data);
n--;
}
return v;
}
bool in(vector<int> v, int n){
for(int i=0;i<v.size();i++){
    if(n==v[i]){
    return true;
}}
return false;
}

int main(){

dlptr P;
int total;
cin>>total;
cretdln(P,total);
vector<int> v=oprn(P,total);
for (int i = 1; i <=total; i++)
{
    if(!in(v,i))
        cout<<'A';
    else
    {
        cout<<'B';
    }
    

}



}