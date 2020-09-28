//For segerating even and odd numbers within an array 
// Used bubble sort
//Used COmmand line Arguments
#include<iostream>
#include <algorithm> 
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int t = *x;  
    *x = *y;  
    *y = t;  
}  
int main(int s, char* argv[])  
{  s=s-1;
int a[s];
 for(int i=0;i<s;i++){
     a[i]=atoi(argv[i+1]);
 }
int l=0,r=s-1;
while(l<r){
    while(a[l]%2==0 && l<r){
         l++;
    }
    while(a[r]%2!=0 && l<r){
         r--;
    }
  if(l<r){
 
 swap(&a[l],&a[r]);
l++;
r--;
  }
}
     int i;  
    for (i = 0; i < s; i++)  
        cout << a[i] << " ";  
    cout << endl;   
    return 0;  
}  






