#include<iostream>
using namespace std;
void swap(int *x, int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}
int partition(int a[],int low,int high){
int p=a[low];
int l=low+1;
int h=high;
while(l<h){
while(a[l]<p){ l++; }
while(a[h]>p){ h--; }
if(l<h){
swap(&a[l],&a[h]);
}
}if(a[low]>a[h])
  swap(&a[low],&a[h]);

return h;
} 
void Quick(int a[],int low,int high){
   if(low<high){
    int j=partition(a,low,high);
      Quick(a,low,j-1);
      Quick(a,j+1,high);
   }

}

int main(){
 int  a[7]={1,8,7,6,7,5,4};

  Quick(a,0,6);

for(int i=0;i<7;i++){
   cout<<a[i]<<" ";
}

   return 0;
}
