#include <cstdlib>
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
#include "Stack.h"
int Oper(int op1,int op2,char op){
switch(op){
case '+': return op1+op2; break;
case '-': return op1-op2; break;
case '*': return op1*op2; break;
case '/': return op1/op2; break;
}
return 0;
}
int OperC(char op){
switch(op){
case '+': return 1 ;break;
case '-': return 1 ;break;
case '*': return 3;break;
case '/': return 4 ;break;
}
return 0;}

int main(int argc, char** argv) {   
std::string input,Post;
std::cin>>input;
int len=input.length();
int i=0;
Stack s=Stack();
s.pushC('s');
i=0;
while(i<len){
    if(isdigit(input[i])){
        Post=Post+input[i];
                         }  
    else if(input[i]=='('){
        s.pushC('(');
    }
    else if(input[i]==')'){
        while(s.peekC() != 's' && s.peekC() != '(') 
            { 
                char c = s.popC(); 
                 Post += c; 
            } 
            if(s.peekC() == '(') 
            { 
                char c = s.popC(); 
            }
        
    }
        else {
            while(OperC(input[i])<=OperC(s.peekC())){
            char dp; 
            dp=s.popC();
              Post=Post+dp;
        
              }
            s.pushC(input[i]);   
            }
        
    i++;
}
while(s.peekC()!='s'){
    Post=Post+s.popC();
}
std::cout<<Post<<std::endl;
len=Post.length();
i=0;    
while (i<len) {
    char r[1]={Post[i]};
    if(isdigit(Post[i])) {
        //std::cout<<atoi(r)<<" ";
        s.push(atoi(r));
        }
    else{
            int op2=s.pop();
            int op1=s.pop();
            int t = Oper(op1,op2,Post[i]);
                s.push(t);
                //std::cout<<t<<" ";
        
        
    }
    i++;
    }
std::cout<<s.peek()<<" ";
return 0; 
}
 
    



