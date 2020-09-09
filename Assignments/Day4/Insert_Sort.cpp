#include<iostream>
using namespace std;
void Serput(int a[],int n,int s){
while(n>=0&& a[n]>s){
    a[n+1]=a[n];
    n--;}
 a[n+1]=s;

}
void insr(int a[],int s,int e){
if(s==e){
	return;
}
else{
	int t=a[s];
	int n=s-1;
	Serput(a,n,t);
	insr(a,s+1,e);
}

}
int main(){
 int a[10]={87,768,2,8,7,1,4,9,3,6};
 insr(a,1,10);
for(int i=0;i<10;i++){
cout<<a[i]<<" ";
}
	return 0;

}

