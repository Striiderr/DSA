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
int main(){



  return 0;
}