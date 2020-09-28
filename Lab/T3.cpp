#include<iostream>
#include<string>
#include<cstring>
using namespace std;

bool Check(int a[],int n){
int r=0;
if(a[n-1]==2){
    
	if(a[0]==1	){
		r==1;
	}

}
if(a[n-1]==3){
	if(a[0]!=4&&a[0]!=5&&a[1]!=5&&a[1]!=4){
		r==1;
	}}
if(a[n-1]==4){
	if(a[n-2]==5){
		r==1;
	}}
	

if(r==1)
return true;

	return false;
}

int main(){
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];
}
if(Check(a,5)){
	cout<<"1";

}
else
cout<<"0";

}