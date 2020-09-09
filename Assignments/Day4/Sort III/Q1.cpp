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
 int a[11]={ 4, 2, 40, 10, 10, 1, 4, 2, 1, 10, 40};
 insr(a,1,11);
for(int i=0;i<11;i++){
cout<<a[i]<<" ";
}
	return 0;

}

