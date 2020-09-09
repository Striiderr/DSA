#include<iostream>
using namespace std;
void swap(int *x, int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;}
int partitionh(int a[],int low,int high){
  int p=a[high];
  int l=low;  
  int h=high-1;
  while(l<h){
  while(a[l]<p){ l++; }
  while(a[h]>p){ h--; }
  if(l<h){
  swap(&a[l],&a[h]);
  }
  }
  if(a[high]<a[l])
  swap(&a[high],&a[l]);

  return l;
  }
int partitionl(int a[],int low,int high){
  int p=a[low];
  int l=low+1;
  int h=high;
  while(l<h){
  while(a[l]<p){ l++; }
  while(a[h]>p){ h--; }
  if(l<h){
  swap(&a[l],&a[h]);
  } }

  if(a[low]>a[h])
  swap(&a[low],&a[h]);

  return h;
  } 
void Quick(int a[],int low,int high){
   if(low<high){
    if(a[low>a[high]]){
   swap(&a[low],&a[high]);
   }
    int j=partitionl(a,low,high);
    int k=partitionh(a,j+1,high);
      Quick(a,low,j-1);
      Quick(a,j+1,k-1);
      Quick(a,k+1,high);
   }

    } 

int main(){
 int  a[7]={9,8,7,6,5,4,3};

  Quick(a,0,6);

for(int i=0;i<7;i++){
   cout<<a[i]<<" ";
}

   return 0;
}
