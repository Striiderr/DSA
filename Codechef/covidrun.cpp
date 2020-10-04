#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};typedef struct node* dlptr;

void cretdln(dlptr &S,int N){
S=new(node);
int n=0;
S->data=n;
S->next=NULL;
dlptr T;
dlptr P=S;
n++;
while(n<N){
T=new(node);
T->data=n;
T->next=NULL;
P->next=T;P=P->next;
n++;
}
P->next=S;
}
int c=0;

void op(dlptr P,int k,int x,int y){
 int u=k;
if(P->data==x){
    c++;
}
if(c==2){
  cout<<"NO";
  return;
}

if(P->data==y){
    cout<<"YES";
    return;
}
else{
 while(u--){
     P=P->next;
 }
 op(P,k,x,y);
}

}

int main(){
    int t;
    cin>>t;
    while(t--){
int n,k,x,y;
cin>>n>>k>>x>>y;
int m=x;
dlptr P;
cretdln(P,n);
//printcl(P);
dlptr S=P;
 while(x--){
     S=S->next;
 }
 op(S,k,m,y);
    
        cout<<"\n";
    }
    return 0;
}