#include<iostream>
using namespace std;

int max(int n,int m){
return (n==0)?(n>m)?n:m:(n%10>m?max(n/10,n%10):max(n/10,m));
}

int main(){
int a=45632792;
int m=max(a,-1);
cout<<m<<endl;
	return 0;
}