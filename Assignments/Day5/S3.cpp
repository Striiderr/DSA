#include<iostream>
#include<string>
#include<cstring>
#include<stack>
using namespace std;
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

stack<int> s;
string input;string num;
getline(cin,input);
int len=input.length();
int i=0;
while(i<len){

if(isdigit(input[i]))
{
	num="";
  while(input[i]!=' ')
  { 
  	char r[1]={input[i]};
      num=num+r;
      i++;
  	}
 int o = stoi(num);
 
 s.push(o);
}
else{
	if(input[i]==' '){
		 	i++ ;continue;
	}
int op2=s.top();	
s.pop();
int op1=s.top();
s.pop();
int result=Oper(op1,op2,input.at(i));

 s.push(result);
           }
i++;
}
 cout<<s.top()<<endl;

	return 0;
}
