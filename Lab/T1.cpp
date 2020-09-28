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
int peep(struct stack &s){return((s.top==-1)? 0:s.elements[s.top--]);}

bool check(int a[],int n,int ii){
	int r=0;
for(int i=ii;i>=0;i--){
if( n<a[i]){
 return false;
}
else 
r++;}
if(r==ii-1){
	return true;

}
else
return false;

}
int main(){
   s.size=0;
 s.size=5;
 
 s.elements[s.size];
 s.top = -1 ;
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];

}
for(int i=0;i<5;i++){
if(check(a,a[i],i)){

	push(s,a[i]);

}

}
while(s.top!=-1){
	cout<<pop(s)<<",";
}

	return 0;
}
