#include<iostream>
#include<string>
#include<cstring>

using namespace std;
struct stack{
int size;
int top;
int elements[50];
};
struct stack s;

void push(struct stack &s,int x){(s.top == s.size-1)?: s.elements[++s.top] = x;}
int pop(struct stack &s){return ((s.top==-1)? 0:s.elements[s.top--]);}
int peep(struct stack s){return ((s.top==-1)? 0:s.elements[s.top--]);}
bool Search(char *s){
	char a[11]={'0','1','2','3','4','5','6','7','8','9'};
	for(int i=0;i<11;i++){
		char t=a[i];
		char co[1]={t};
		if(strcmp(s,co)==1){
			return true;
		}

	}
 return false;
 


     }
int Oper(int op1,int op2,char op){
switch(op){
case '+': return op1+op2; break;
case '-': return op1-op2; break;
case '*': return op1*op2; break;
case '/': return op1/op2; break;
}
return 0;
}
int main(){


string input;
cin>>input;
int len=input.length();
s.top=-1;
s.size=0;
int i=0;
while(i<len){
	int res;
 char r[1]={input.at(i)};
 if(Search(r)){res=0;}
   else {res=1;}
 if(res==0){s.size++;}
   i++;
 }
 s.elements[s.size];
 i=0;
while(i<len){
	int res;
 char r[1]={input.at(i)};
 if(Search(r)){res=0;}
  
  else {res=1;}

if(res==0){
   int op1 =atoi(r);
   
   push(s,op1);
   }
   if(res==1){
int op2=pop(s);
int op1=pop(s);
int result=Oper(op1,op2,input.at(i));
   
push(s,result);
   }
   i++;
 }
 cout<<s.elements[s.top]<<endl;

	return 0;
}