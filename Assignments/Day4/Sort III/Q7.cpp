#include<iostream>
using namespace std;

void swap(int *x, int *y){

  int t;
  t=*x;
  *x=*y;
  *y=t;
}

void ser(int a[],int l,int h){
int s=l+1;
int e=h-1;
if(a[l]>a[s]){ swap(&a[l],&a[s]);}
else if(a[h]<a[e]){ swap(&a[e],&a[h]);}
else{
	while(s<h){

   if(a[s]>a[s+1] || a[s-1]>a[s]){
break;
   }
   else s++;}
 while(e>l){
   if(a[e]>a[e+1] || a[e-1]>a[e]){
    break;
   }   
   else e--;
}
swap(&a[s],&a[e]);

}
}

int main(){
int a[6]={3, 5, 6, 7, 9, 8};
ser(a,0,5);
for(int i=0;i<6;i++){
	cout<<a[i]<<" ";
}
	return 0;
}