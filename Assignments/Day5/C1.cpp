#include<iostream>
using namespace std;
struct stack{
int size;
int top;
int elements[50];
};
struct stack s;

void push(struct stack &s,int x){(s.top == s.size-1)?: s.elements[++s.top] = x;}
int pop(struct stack &s){return((s.top==-1)? 0:s.elements[s.top--]);}
int peep(struct stack s){return((s.top==-1)? 0:s.elements[s.top--]);}


int main(){
	 int n; cin>>n;
   s.size=0;
 int no=n,p=0;
 while(n!=0){
 	p++;
 	n=n/10;
 }
 s.size=p;
 s.elements[s.size];
 s.top = -1 ;
 while(no>0){
 	push(s,no%10);
   cout<<"Size "<<s.size<<" Top "<<s.top<<" "<<s.elements[s.top]<<endl;
 	no = no/10;
 }


while(s.top!=-1){
	cout<<pop(s)<<" ";
}


	return 0;
}
