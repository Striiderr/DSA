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

void cretdln(dlptr &S){
S=new(dlnode);
S->left=NULL;
int n;
cin>>n;
S->data=n;
S->right=NULL;
dlptr T;
dlptr P;
P=S;
cin>>n;
while(n!=-1){
T=new(dlnode);
T->left=P;
T->data=n;
T->right=NULL;
P->right=T;P=P->right;
cin>>n;
}
}
void addfrnt(dlptr &S,int l){
dlptr T;
T=new(dlnode);
T->left=NULL;
T->data=l;
T->right=S;
S=T;
}

void delfront(dlptr &S){
S->right->left=NULL;
S=S->right;
}

void delend(dlptr S){
while(S->right!=NULL)
S=S->right;

S->left->right=NULL;
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

void addend(dlptr S,int l){
while(S->right!=NULL)
S=S->right;
dlptr T;
T=new(dlnode);
T->left=S;
T->data=l;
T->right=NULL;
S->right=T;


}

void addbefore(dlptr &P, int l,int b){
  if(P->data==b){
      addfrnt(P,l);
      return;
  }
  dlptr S=P;
while(S!=NULL)
{
    if(S->data==b){
dlptr T;
T=new(dlnode);
T->left=S->left;
T->data=l;
T->right=S;
S->left=T;
if(T->left!=NULL)
{T->left->right=T;}
    break;}
    S=S->right;

}
}

void addafter(dlptr S,int l,int b){
while ((S->data!=b))
{
    S=S->right;
}
dlptr T;
T=new(dlnode);
T->left=S;
T->data=l;
T->right=S->right;
S->right=T;

if(T->right!=NULL)
T->right->left=T;

}

dlptr partition(dlptr S,dlptr E){
int p=E->data;
dlptr I=S->left;
dlptr J=S;
while(J!=E)
{
    if(J->data<=p){

    if(I==NULL){I=S;}
    else {I=I->right;}

     swap(&I->data,&J->data);}

    J=J->right;
}

   if(I==NULL){I=S;}
   else {I=I->right;}
   
    swap(&I->data,&E->data);

return I;
} 
void Quick(dlptr S,dlptr E){
   if(E!=NULL && S!=E && S!=E->right){
    dlptr J=partition(S,E);
      Quick(S,J->left);
      Quick(J->right,E);
   }

}

void print(dlptr P){
while(P!=NULL){
cout<<P->data<<" ";
P=P->right;
}
cout<<"\n";
}


int main(){
dlptr P;
cretdln(P);
print(P);
int k;
cin>>k;
addfrnt(P,k);
print(P);
cin>>k;
addend(P,k);
print(P);
int b;
cin>>k>>b;
addbefore(P,k,b);
print(P);
cin>>k>>b;
addafter(P,k,b);
print(P);
delfront(P);
print(P);
delend(P);
print(P);
cin>>k;
delk(P,k);
print(P);
dlptr Q=P;
while(Q->right!=NULL)
{Q=Q->right;
}
Quick(P,Q);
print(P);
    return 0;
}
