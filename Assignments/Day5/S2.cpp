#include<iostream>
#include<stack>
using namespace std;
void Swap(int &a,int &b){
int t=b;
b=a;
a=t;
}
stack<int> s;
void BS(stack &s,int n){
	
for (int i = 0; i < 5; ++i)
{
	for (int j = 1; j < 5-i; ++j)
	{
		int se=s.top();
		s.pop();
	 if(s.top()>){
       a[j-1]=a[j];
        a[j]=s.top();
        s.pop();
	 	s.push(a[j-1]);}
	 else
	 	s.pop();
	 s.push(a[j]);
}
}
}
int main(){
s.push(5);
s.push(3);
s.push(8);
s.push(2);
s.push(6);
BS(s,5);
for (int i = 0; i < 5; ++i)
{
	cout<<a[i]<<" ";
}
return 0;
}
