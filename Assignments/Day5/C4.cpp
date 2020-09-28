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

void push(struct stack &s,char x){(s.top == s.size-1)?:s.elements[++s.top] = x;}
char pop(struct stack &s){return((s.top==-1)? 0:s.elements[s.top--]);}
char peep(struct stack s){return((s.top==-1)? 0:s.elements[s.top]);}
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
int Oper(char op){
switch(op){
case '+': return 1 ;break;
case '-': return 1 ;break;
case '*': return 3;break;
case '/': return 4 ;break;
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
 if(res==1){s.size++;}
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
 cout<<input[i];

 }

 else{
 	if(Oper(input[i])>Oper(peep(s))){

     push(s,input[i]);
 	}
  else 

  	{char po;
  	while(Oper(input[i])<=Oper(peep(s))){
       po=pop(s);
       cout<<po;
       char ty[1]={peep(s)};
       if(Search(ty)){
       	break;}
 	          
 	          }
 	 push(s,input[i]);
}

 }
   i++;
 }
 cout<<s.elements[s.top]<< "  ";



	return 0;
}