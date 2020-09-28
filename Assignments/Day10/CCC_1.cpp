#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for (int i = a; i <= b; i++)

struct node{
  int data;
  struct node *next;};  typedef struct node *nptr;


void createll(nptr &P,int link){
	int n;
    nptr T,N,Q;
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
	}
 Q=P;
	for(int i=0;i<link;i++)
		Q=Q->next;

 T->next=Q;
}

bool check(nptr A,int &val)
{
	nptr S_P,F_P;
	S_P = A;
    F_P = A;
    while(S_P  != NULL)
    {
      S_P = S_P->next;
      F_P = F_P->next;
      F_P = F_P ->next;
      if(F_P ->next== S_P->next)
      {
      	val=S_P->data;
        return true;
        break;
       }
      }
      return false;
  }

int main()
{
int link;
link=5;
nptr L;
createll(L,link);
int val=0;
bool c=check(L,val);
if(c){
	cout<<'1'<<"\n"<<val;;
}
else{
	cout<<'0';
}
return 0;

}