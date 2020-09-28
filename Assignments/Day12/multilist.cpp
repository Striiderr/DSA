#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};typedef struct node *lptr;
struct mlnode{
    int mdata;
    struct node *dlink;
    struct mlnode *mnext;
};typedef struct mlnode *mlptr;

void dlink_cr(lptr &s){
  lptr c;
  int n;
  cin>>n;
  s = new(node);
  s->data = n;
  s->next = NULL;
  cin>>n;
  c = s;
    while(n>0)
    {
      lptr t;
      t = new(node);
      t->data = n; 
      t->next = NULL;
     
      c->next=t; c=c->next;
      cin>>n;
    }
  }
void dl_p(lptr p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}
void print(mlptr T)
{
  while(T!=NULL)
  {
      cout<<T->mdata<<" ";
      
      if(T->dlink != NULL)
      {
        dl_p(T->dlink);
      }
      T = T->mnext;
  }
}
  int main()
  {
    mlptr M,S,T;
    lptr p;
    int n,m;
    cin>>n;
    cin>>m;
   
    S = new(mlnode);
    S->mdata = n;
     
     if(m==1)
     {
      dlink_cr(p); 
      S->dlink=p;
    }
    else
      {
       S->dlink = NULL;
        }
    S->mnext = NULL;
    M  = S;
    cin>>n;
    
      while(n>-2)
      {
        if(n==1)
        {
          p = new(node);
          dlink_cr(p);
          M->dlink=p;
          cin>>n;
        }
        else if(n==0){
          cin>>n;
          M->dlink=NULL;
        }
        else
        {
        T = new(mlnode); T->mdata = n; T->mnext = NULL;
        M->mnext = T; M = M->mnext;
        cin>>n; 
         }
 
    }
    print(S);
}
