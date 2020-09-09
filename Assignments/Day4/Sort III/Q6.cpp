#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *x, int *y){

  int t;
  t=*x;
  *x=*y;
  *y=t;
}
 static int h=0;
 static int n1;
 static int n3; 
 static int y;
void Merg(int a[],int n0,int v,int b[]){

if(h<n3){

 int x=n0;y=n0;
if(a[n0]==v)
  {Merg(a,y+1,b[h],b);   }
 else
{ while(x<n1){

    if(a[x]==v){

    //	cout<<"\n"<<v<<" "<<a[x]<<" "<<a[y]<<"\n";

    	swap(&a[x],&a[y]);  y++;x++;
    }
    else {
          x++;
    }
}

h++;
Merg(a,y,b[h],b);
}}
}


int main(){
int a[15]={5, 8, 9, 3, 5, 7, 1, 3, 4, 9, 3, 5, 1, 8, 4},b[4]={3,5,7,2};
n1=15;n3=4;
 
Merg(a,0,b[h],b);
cout<<y<<"\n";
sort(a+y,a+n1);

  

for(int i=0;i<15;i++){
	cout<<a[i]<<" ";
}

	return 0;
}