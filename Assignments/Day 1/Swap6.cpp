#include<iostream>
using namespace std;

void swap(int &x, int *y){
  int t;
  t=x;
  x=*y;
  *y=t;
}
int main(){
 int a,b;
 a=3;b=4;
 swap(a,b);
   cout<<a<<"  "<<b;
	return 0;
}