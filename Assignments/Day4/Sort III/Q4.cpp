#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *x, int *y){

  int t;
  t=*x;
  *x=*y;
  *y=t;
}
void Merg(int a[],int n1,int b[],int n2){

 int x=0,y=0;
 while(x<n1){
    if(a[x]>=b[y]){
    	//cout<<"\n"<<a[x]<<" "<<a[y];
    	swap(&a[x],&b[y]);  x++;
    	sort(b,b+n2);
    }
    else {
          x++;
    }
}
}
int main(){
int a[]={1, 4, 7, 8, 10 },b[]={2,3,9};
int n1=5,n2=3;
if(n1>=n2)
Merg(a,n1,b,n2);
else if (n2>n1)
{
	Merg(b,n2,a,n1);
}
for(int i=0;i<5;i++){
	cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0;i<3;i++){
	cout<<b[i]<<" ";
}

	return 0;
}