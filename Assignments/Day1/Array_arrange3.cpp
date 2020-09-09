
#include<iostream>
#include <algorithm> 
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int t = *x;  
    *x = *y;  
    *y = t;  
} 

void Arrange(int a[], int n)  
{  int v=0;
 for(int u=0;u<n;u++){  
    if (a[u]%2!=0){
    v++;
  }
}
   cout<<"\n"<<v<<"\n";
    int i, j;  
    for (i=0; i<v; i++) {            
    for (j = 0; j < n-1; j++)  {
        if (a[j]%2!=0){  
            swap(&a[j], &a[j+1]);  }}
    } } 
int main()  {
int s=9;
int a[s];

  for(int t=0;t<s;t++){
     cin>>a[t];
                      }
    Arrange(a,s);

   for(int y=0;y<s;y++){
       cout<<a[y]<<" ";
   }
 
      
    return 0;  
}  




