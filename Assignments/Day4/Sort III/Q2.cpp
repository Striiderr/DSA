#include<iostream>
using namespace std;
void trip(int a[],int n){
  int d,b,c;
  int i=0,chec=0;
  for(int o=0;o<n;o++){
    d=a[i];
    if(a[o]>d){
    	b=a[o];
    for(int q=o;q<n;q++){
       if(a[q]>b){
          c=a[q]; chec =1;

       }
       if(chec==1){
       	break;
       }
    }


  }
   if(chec==1){
       	break;
       }
  

}

cout<<"("<<d<<","<<b<<","<<c<<")";

}

int main(){
int a[7]= { 5, 4, 3, 7, 6, 1, 9 }; 
 trip(a,7);
	return 0;
}