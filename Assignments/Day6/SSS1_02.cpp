#include <cstdlib>
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>

class Stack {   
    int top;
    int topC;
    int MAX;
    int MAXc;
    int a[50];
    char b[50];
public:
   
    Stack() {
        top=-1;
        topC=-1;
     MAX=50;
     MAXc=50;
          }
    
    Stack(const int s) {
        top=-1;
        topC=-1;
    MAX=s;
    MAXc=s;
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
};

void swap(int *x, int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}
int partition(int a[],int low,int high){
int p=a[low];
int l=low+1;
int h=high;
while(l<h){
while(a[l]<p){ l++; }
while(a[h]>p){ h--; }
if(l<h){
swap(&a[l],&a[h]);
}
}if(a[low]>a[h])
  swap(&a[low],&a[h]);

return h;
} 
void QSIt(int a[],int l,int h){
  Stack s=Stack(h-l-1);
s.push(l);
s.push(h);
while(!s.isEmpty()){
    h=s.pop();
    l=s.pop();
    int p=partition(a,l,h);
    if(p-1>l){
        s.push(l);
        s.push(p-1);
        }
    if (p+1<h) {
        s.push(p+1);
        s.push(h);
        }
}
    
    
}
int main(int argc, char** argv) {   
    
    int a[5]={4,6,7,5,2};
    QSIt(a,0,4);
    for (int i = 0; i < 5; i++) {
        std::cout<<a[i]<<" ";

    }

  
return 0; 
}
 
    


