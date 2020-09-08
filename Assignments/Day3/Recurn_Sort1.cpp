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
void bsort(int a[], int n){
if(n<0)
   {  return; }
   else{
   	for(int i=0;i<n-1;i++){
   		if(a[i]>a[i+1]){
   			swap(&a[i],&a[i+1]);
   		}

   	}
  bsort(a,n-1);
   	
}
    }
int main(){
int n;
n=9;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
ssort(a,n);

for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
} 

