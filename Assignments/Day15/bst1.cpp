#include<iostream>
using namespace std;

struct bstnode{
bstnode *lchild;
int data;
bstnode *rchild;
}; typedef struct bstnode *bstptr;

void insrt(bstptr &T,int k){
    if(T==NULL){
        T=new(bstnode);
        T->lchild=NULL;
        T->data=k;
        T->rchild=NULL;
                }
    else{
        if(k<T->data){
            insrt(T->lchild,k);
                    }
        else{
            insrt(T->rchild,k);
            }
        }
}
void cretBST(bstptr &T){
int n;
cin>>n;
while(n!=-1){
insrt(T,n); cin>>n;}

}
void pmin(bstptr T){
while(T->lchild!=NULL)
	T=T->lchild;
cout<<T->data;

}

void pmax(bstptr T){
while(T->rchild!=NULL)
	T=T->rchild;
cout<<T->data;




void print(bstptr *T){
if(T==NULL)
  return;
else{
 print(T->lchild);
 cout<<T->data<<" ";
 print(T->rchild);

}}

int main(){
bstptr T;
T=NULL;
cretBST(T);
print(T);
cout<<"\n";
    return 0;
}