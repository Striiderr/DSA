#include<iostream>
using namespace std;

class BST{
int d;
BST *l,*r;
public:
BST();
BST(int);
BST* insrt(BST *,int);
void printinodr(BST *);
};

BST :: BST() : d(0), l(NULL), r(NULL){} 

BST :: BST(int value) 
{ 
	d = value; 
	l = r = NULL; 
} 

BST* BST :: insrt(BST *root,int value)
{
 if(root==NULL)
 {
     return new BST(value);
 }
 if(value > root->d)
 {
     root->r = insrt(root->r,value);     
 }
 else
 {
     root->l = insrt(root->l , value);
 }
 
 return root;

}

void BST :: printinodr(BST *root)
{
if(root==NULL){
    return;

}
printinodr(root->l);
cout<<root->d<<" ";
printinodr(root->r);

}    


int main(){
  int n;
    cin>>n;
BST b,*root = NULL;

root=b.insrt(root,n);
cin>>n;
    while(n!=-1){
        b.insrt(root,n);
        cin>>n;
        }

b.printinodr(root);

}
