#include<iostream>
using namespace std;

void swap(int *x, int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}
int Max(int a[],int n,int &max,int &loc){
    if(n==0){
	if(a[0]>max){max=a[0]; loc=0;}
     else{max;}
    return a[0];
	}
	else{
	if(a[n]>max){ max=a[n]; loc=n;}
    else{max;}
   return a[n]+ Max(a,n-1,max,loc);
}}
void ssort(int a[], int n){

	if(n<1){
		return;
	}
   else{
   	int loc=-1,max=-100000000;
     int r=Max(a,n-1,max,loc);
     swap(&a[loc],&a[n-1]);
       ssort(a,n-1);
     
   }
 
 
 
} 

void bsort(int b[], int n){
	
if(n==0)
   {  return; }
   else{
     if(b[n]<b[n-1]){
        swap(&b[n],&b[n-1]);                   }
        bsort(b,n-1);
        bsort(b,n-1);
           }}
int main(){
int n;
n=12;
int a[n/2],b[n/2+2];
//b[n/2]=345672345;
//b[n/2+1]=1234567;
for(int i=0;i<n/2;i++){
	cin>>a[i];
}
for(int i=0;i<=n/2+1;i++){
	cin>>b[i];
}
ssort(a,n/2);
bsort(b,(n/2)+1);
for(int i=0;i<n/2;i++){
	cout<<a[i]<<" ";
}
cout<<"\n";
for(int i=0;i<=((n/2)+1);i++){
	cout<<b[i]<<" ";
}
}

