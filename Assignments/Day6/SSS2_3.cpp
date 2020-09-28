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

bool isOper(char x) { 
  switch (x) { 
  case '+': 
  case '-': 
  case '/': 
  case '*': 
    return true; 
  } 
  return false; 
} 
std::string topost(std::string exp){
    Stack s=Stack();
    int len=exp.length();
    for (int i = len; i >= 0; i--) {
        if(isOper(exp[i])){
            std::string op1=s.popS();
            std::string op2=s.popS();
            std::string out="("+op1+exp[i]+op2+")";
            s.pushS(out);
           // std::cout<<out<<"\n";
        }
        else{
            s.pushS(std::string(1,exp[i]));
            }
                                    }
    std::string ret;
    ret=s.popS();    
return ret;
}
int main(int argc, char** argv) {   
    std::string in;
    std::cin>>in;
    std::string output=topost(in);
    std::cout<<output;
    
    
    
  
return 0; 
}
 
    


