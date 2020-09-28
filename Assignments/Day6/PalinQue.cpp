	#include<iostream>
	using namespace std;
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
	    
	    int peek() { 
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
	class Queue{
	    int f;
	    int r;
	    int size;
	    int count;
	    int a[50];
	    std::string b[50];
	    
	public:
	     Queue(){
	        f=-1;
	        r=-1;
	        count=0;
	        size=50;      }
	    Queue(const int s){
	        f=-1;
	        r=-1;
	        size=s; 
	         count=0;      }
	    
	    void enque(int x){
	        if((r+1)%size ==f){
	            std::cout<<"Full";
	        }
	        else if(f==-1){
	            f=0;r=0;
	            a[r]=x;
	            count++;
	        }
	        else{
	            r=(r+1)%size;
	            a[r]=x;
	            count++;
	            }
	    }    
	    int deque(){
	        if(f==-1){
	            std::cout<<"Empty";
	            return 0;
	        }
	        else if(f==r){
	        	int t=a[f];
	            f=-1;r=-1;
	            count--;
	            return t;
	        }
	        else{
	            int t=a[f];
	            f=(f+1)%size;
	            count--;
	            return t;
	        }
	        }
	    int sizeQue(){
	        return count;
	    }    
	    bool Empty(){
	        return (sizeQue()==0);
	    }
	    bool Full(){
	        return (sizeQue()==size);
	    }
	    void enqueS(std::string x){
	        if((r+1)%size ==f){
	            std::cout<<"Full";
	        }
	        else 
	            if(f==-1){
	            f=0;r=0;
	            b[r]=x;
	            count++;
	        }
	        else{
	            r=(r+1)%size;
	            b[r]=x;
	            count++;
	            }
	    }    
	    std::string dequeS(){
	            if(f==-1){
	            std::cout<<"Empty";
	            exit(1);
	        }
	        else if(f==r){
	            f=-1;r=-1;
	            return "";
	        }
	        else{
	            std::string t=b[f];
	            f=(f+1)%size;
	            count--;
	            return t;
	        }
	        }   
	};


int main(){
Queue Q=Queue(5); 
	    Q.enque(1);
	    Q.enque(2);
	    Q.enque(3);
	    Q.enque(3);
	    Q.enque(1);
	    Stack s=Stack(5);
	    int i;
	    for(i=0;i<5;i++){
	int t=Q.deque();
          s.push(t);
	  int p=s.peek();
	   Q.enque(p);
	}
	int x=Q.sizeQue()/2;
	for(i=0;i<Q.sizeQue()/2;i++){
	int t=s.pop();
	int r=Q.deque();
	if(t!=r){
		break;
	}
	}

if(i==x)
{
cout<<"Yes";
}
else{
	cout<<"No";
}


return 0;
}