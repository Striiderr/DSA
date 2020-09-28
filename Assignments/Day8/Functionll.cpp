#include<iostream>
using namespace std;
struct node {
 int data;
  node* next; 
    
 };
//void delf(struct node *&P,int k){
//	if(P->data==k){
//P=P->next;}
//}
void delVal(struct node *&P,int k){
   if(P->data==k){
   P=P->next;
   return;
   }
   struct node *T;
   T=P;
	while(T!=NULL){
	if(T->next->data==k){
       T->next=T->next->next;
       return;
	}
	T=T->next;
   }
 }
int find(struct node *P,int k){
 while(P!=NULL){
   if(P->data==k){
   	return 1;
   }
 P=P->next;
   } 
 return 0; 
 }
int even(struct node* P){
    int k=0;
    while(P!=NULL){

   if(P->data%2==0){
   	 k++;}
    P=P->next;
   } 
 return k;
     
 } 
int odd(struct node* P){
     int k=0;
     while(P!=NULL){
     if(P->data%2!=0){
   	 k++;
     }
     P=P->next;
     } 
     return k;   
     }
int count(struct node* P){
     int k=0;
     while(P!=NULL){
   	 k++;
 		P=P->next;
   		} 
 		return k;
 		}
int mid(struct node* P){
     int k,r=0;
     node *T;
     T=P;
     while(T!=NULL){
         T=T->next;
         r++;
     }
     r=r/2;
     while(r>0){
         P=P->next;
         r--;
     }
     k=P->data;
     return k;
      }
int max(struct node *P){
	 
	 int k=P->data;
	 while(P!=NULL){
	   if(P->data>k){
	   k=P->data;
	   }
	 P=P->next;
	   } 
	 return k; 
	 }
 
int min(struct node *P){
 
 int k=P->data;
 while(P!=NULL){
   if(P->data<k){
   k=P->data;
   }
 P=P->next;
   } 
 return k; 
 }

void insrtbf(struct node *P,int x,int y){
	struct node *T,*N;
	T=new(node);
	while(P!=NULL){
	if(P->next->data==y){
		T->data=x;
		T->next=P->next;
		break;
	}	
    P=P->next;}
	P->next=T;
	};

void insrtaf(struct node *P,int x,int y){
	struct node *T,*N;
	while(P!=NULL){
	if(P->data==y){
		T=new(node);
		T->data=x;
		T->next=P->next;
		break;
	}	
  P=P->next;}
	P->next=T;
	};

void addfrnt(struct node *&L,int k){
		struct node *T,*N;
		T=new(node);
		T->data=k;
		N=L;
		L=T;
		L->next=N;
		}

void insrt(struct node *P,int k){
	node *T;
	T=new(node);
	T->data=k;
	T->next=NULL;
	while(P->next!=NULL)
    	P=P->next;

	    P->next=T;
	}



void print(struct node *P){
	if(P!=NULL){
	cout<<P->data<<" ";
	print(P->next); 
	}}

void revprint(struct node *P){
	if(P!=NULL){
	revprint(P->next); 
	cout<<P->data<<" ";}
	}
	
int main(){
	struct node *L;
	L=new(node);
	int n;
	cin>>n;
	L->data=n;
	L->next=NULL;
	cin>>n;
	if(n>0){
	while(n>0){
	insrt(L,n);
	cin>>n;
	}}
 	
 	print(L);
	int c=count(L);
	cin>>c;
	addfrnt(L,c);
	print(L);
	int x,bf,af;
	cin>>x>>bf;
	insrtbf(L,x,bf);
	print(L);
    cin>>x>>af;
    insrtaf(L,x,af);
    print(L);
    int del;
    cin>>del;
    delVal(L,del);
    print(L);
  //  cout<<endl;
	int m=min(L);
	int mx=max(L);
	delVal(L,m);
    print(L);
//	cout<<endl;
	delVal(L,mx);
	print(L);	
//	cout<<endl;
	}

 