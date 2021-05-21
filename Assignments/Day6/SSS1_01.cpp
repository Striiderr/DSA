#include <cstdlib>
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
class Stack {   
    int top;
    int topC;
    int topS;
    int MAX;
    int MAXc;
    int MAXs;
    int a[50];
    char b[50];
    std::string c[50];
public:
   
    Stack() {
        top=-1;
        topC=-1;
        topS=-1;
     MAX=50;
     MAXc=50;
     MAXs=50;
     
          }
    
    Stack(const int s) {
        top=-1;
        topC=-1;
        topS=-1;
    MAX=s;
    MAXc=s;
    MAXs=s;
}
     

    void push(int x)  { 
    if (top >= (MAX - 1)) { 
        std::cout << "Stack Overflow"; 
        exit(1);
    } 
    else { 
        a[++top] = x; 
       // std::cout << x << " pushed into stack\n"; 
    } 
 }   
    int pop()  { 
    if (top < 0) { 
        std::cout << "Stack Underflow"; 
        return 0; 
    } 
    else { 
        int x = a[top--]; 
        return x; 
    } 
 }  
    
    int peek()  { 
    if (top < 0) { 
        std::cout << "Stack is Empty"; 
        return 0; 
    } 
    else { 
        int x = a[top]; 
        return x; 
    } 
 }  
    bool isEmpty() { 
    return (top < 0); 
} 
     void pushC(char x)  { 
    if (topC >= (MAXc - 1)) { 
        std::cout << "Stack Overflow"; 
        exit(1); 
    } 
    else { 
        b[++topC] = x; 
      //  std::cout << x << " pushed into stack\n";  
    } 
 }   
    
    char popC()  { 
    if (topC < 0) { 
        std::cout << "Stack Underflow"; 
        return '\0'; 
    } 
    else { 
        char x = b[topC--]; 
        return x; 
    } 
 }  
    
    char peekC()  { 
    if (topC < 0) { 
        std::cout << "Stack is Empty"; 
        return '\0'; 
    } 
    else { 
        char x = b[topC]; 
        return x; 
    } 
 }  
    
    bool isCEmpty() { 
    return (topC < 0); 
} 
       void pushS(std::string x)  { 
    if (topS >= (MAXs - 1)) { 
        std::cout << "Stack Overflow"; 
        exit(1); 
    } 
    else { 
        c[++topS] = x; 
      //  std::cout << x << " pushed into stack\n";  
    } 
 }   
    
    std::string popS()  { 
    if (topS < 0) { 
        std::cout << "Stack Underflow"; 
        return ""; 
    } 
    else { 
        std::string x = c[topS--]; 
        return x; 
    } 
 }  
    
    std::string peekS()  { 
    if (topS < 0) { 
        std::cout << "Stack is Empty"; 
        return ""; 
    } 
    else { 
        std::string x = c[topS]; 
        return x; 
    } 
 }  
    
    bool isSEmpty() { 
    return (topS < 0); 
} 
    
};

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
 
    



