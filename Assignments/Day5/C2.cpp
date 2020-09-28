#include<iostream>
#include<string>
#include<cstring>

using namespace std;
struct stack{
int size;
int top;
char elements[50];
};
struct stack s;

void push(struct stack &s,char x){(s.top == s.size-1)?:s.elements[++s.top] = 'x';}
char pop(struct stack &s){return((s.top==-1)? 0:s.elements[s.top--]);}
char peep(struct stack s){return((s.top==-1)? 0:s.elements[s.top]);}

int main(){


string input;
cin>>input;
int len=input.length();
s.top=-1;
s.size=0;
int i=0;
while(i<len){
	char sy[1]={input.at(i)};
	int res=strcmp(sy,"(");
   if(res==0){
    s.size++;
   }
   i++;
 }
 s.elements[s.size];
i=0;
while(i<len){
	char sy[1]={input.at(i)};
	int res=strcmp(sy,"(");

if(res==0){
  push(s,input.at(i)); 
}
else
	{char c; c=pop(s);}

 i++;
}
(s.top==-1)?cout<<"Yes":cout<<"No";
}