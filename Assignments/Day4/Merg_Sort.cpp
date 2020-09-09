#include<iostream>
using namespace std;

void Merg(int a[],int s,int m,int e){
 int s1=m-s+1;
 int s2=e-m;
 int l[s1],r[s2];
 for(int i=0;i<s1;i++){
      l[i]=a[s+i];
 }
 for(int i=0;i<s2;i++){
      r[i]=a[m+1+i];
 }
 int x=0,y=0,z=s;
 while(x<s1 && y<s2){
    if(l[x]>=r[y]){
    	a[z]=r[y]; y++; z++;
    }
    else {
    	a[z]=l[x]; x++; z++;
    }

 }
 while(x<s1){
 a[z]=l[x];
 z++;
 x++;
 }
 while(y<s2){
 a[z]=r[y];
 z++;
 y++;
 }}

void Sort(int a[],int s,int e){
 if(s<e)
 {
 int m=(s+e)/2;
 Sort(a,s,m);
 Sort(a,m+1,e);

 Merg(a,s,m,e); 


 }
 }
int main(){

int a[]={21,7,84,19,22,78,6,30};
Sort(a,0,7);
for(int i=0;i<8;i++){

	cout<<a[i]<<" ";
}

}