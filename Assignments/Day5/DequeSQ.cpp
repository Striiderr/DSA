#include<iostream>
#include<deque>
using namespace std; 

deque <int> dequ; 

class Stack{ 
public: 

	void push(int element) 
	{ 
		dequ.push_back(element);
	} 

	void pop() 
	{ 
		dequ.pop_back(); 
	} 
}; 

class Queue { 
public: 
	
	void enqueue(int element) 
	{ 
		dequ.push_back(element); 
	} 
	void dequeue() 
	{ 
		dequ.pop_front(); 
	} 
}; 

int main() 
{ 

	Stack s; 


	s.push(16); 
	s.push(76); 
	cout << "Stack: "; 
	cout<<dequ.back()<<" ";
	s.pop(); 
	cout<<dequ.back()<<"\n";
	s.pop(); 
     Queue q; 
	q.enqueue(4); 
	q.enqueue(1); 
	cout << "Queue: "; 
	cout<<dequ.front()<<" ";
	q.dequeue();
	cout<<dequ.front()<<"\n";
	q.dequeue();
	return 0; 
} 
