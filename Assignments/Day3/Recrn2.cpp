#include<iostream>
using namespace std;

int Max(int a[],int n,int &max,int &min){
    if(n==0){
	a[0]>max?max=a[0]:max;
    a[0]<min?min=a[0]:min;

    return a[0];
	}
	else{
	a[n]>max?max=a[n]:max;
    a[n]<min?min=a[n]:min;

   return a[n]+ Max(a,n-1,max,min);
}

}
int main(){
int n,max=-1, min=100000;;
cout<<"ENter No of elements in the Array:";
cin>>n;
cout<<"Enter Array Elements:";
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int t=Max(a,n-1,max,min);
cout<<"Array Sum:"<<t;
cout<<"\nMax:"<<max<<"\nMin:"<<min<<endl;
}