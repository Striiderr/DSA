#include<iostream>
#include<string>
#include<cstring>

using namespace std;
struct stack{
int size;
int top;
int elements[50];
};
struct stacks{
int size;
int top;
char elements[50];
};
struct stack s;

void push4(struct stacks &s,char x){(s.top == s.size-1)?:s.elements[++s.top] = x;}
char pop4(struct stacks &s){return((s.top==-1)? 0:s.elements[s.top--]);}
char peep4(struct stacks s){return((s.top==-1)? 0:s.elements[s.top]);}
struct stack s1;
void push(struct stack &s1,int x){(s1.top == s1.size-1)?: s1.elements[++s1.top] = x;}
int pop(struct stack &s1){return ((s1.top==-1)? 0:s1.elements[s1.top--]);}
int peep(struct stack s1){return ((s1.top==-1)? 0:s1.elements[s1.top--]);}
bool Search4(char *s){
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
int Oper4(char op){
switch(op){
case '+': return 1 ;break;
case '-': return 1 ;break;
case '*': return 3;break;
case '/': return 4 ;break;
}
return 0;
}
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
string input,in="";
cin>>input;
int len=input.length();
s.top=-1;
s.size=0;
int i=0;
while(i<len){
	int res;
 char r[1]={input.at(i)};
 if(Search4(r)){res=0;}
   else {res=1;}
 if(res==1){s.size++;}
   i++;
 }
 s.elements[s.size];
 i=0;
 while(i<len){
	int res;
 char r[1]={input.at(i)};
 if(Search4(r)){res=0;}
   else {res=1;}

  if(res==0){
  in=in+input[i];
 }

 else{
 	if(Oper4(input[i])>Oper4(peep4(s))){

     push4(s,input[i]);
 	}
  else 

  	{char po;
  	while(Oper4(input[i])<=Oper(peep4(s))){
       po=pop4(s);
       in=in+po;
       char ty[1]={peep4(s)};
       if(Search4(ty)){
       	break;}
 	          
 	          }
 	 push4(s,input[i]);
}

 }
   i++;
 }
 in=in+to_string(s.elements[s.top]);




cin>>in;
int len1=in.length();
s1.top=-1;
s1.size=0;
 i=0;
while(i<len1){
	int res;
 char r[1]={in.at(i)};
 if(Search(r)){res=0;}
   else {res=1;}
 if(res==0){s1.size++;}
   i++;
 }
 s1.elements[s1.size];
 i=0;
while(i<len1){
	int res;
 char r[1]={in.at(i)};
 if(Search(r)){res=0;}
  
  else {res=1;}

if(res==0){
   int op1 =atoi(r);
   
   push(s1,op1);
   }
   if(res==1){
int op2=pop(s1);
int op1=pop(s1);
int result=Oper(op1,op2,in.at(i));
   
push(s,result);
   }
   i++;
 }
 cout<<s1.elements[s1.top]<<endl;


	return 0;
}