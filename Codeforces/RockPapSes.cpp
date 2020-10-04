#include<iostream>
using namespace std;

int max(int a0,int a1,int a2,int b0, int b1,int b2){
int ret=0;
if(a0<b1){
    ret= ret+a0;
  
}
else 
ret =ret+b1;

if(a1<b2){
    ret= ret+a1;
  
}
else 
ret =ret+b2;

if(a2<b0){
    ret= ret+a2;
   
}
else 
ret =ret+b0;

return ret;

}

int min(int b0, int b1,int b2,int a0,int a1,int a2){
int ret=0;
if(a0<b1){
    b1=b1-a0;
    a0=0;
}
else 
{
   
    b1=0;

}

if(a1<b2){
    b2=b2-a1;
    a1=0;
}
else 
{
    
    b2=0;

}

if(a2<b0){
    b0=b0-a2;
    a2=0;
}
else 
{
    
    b0=0;

}
ret=0;
if(b0){
    ret=ret+b0-a0;
}
if(b1){
    ret=ret+b1-a1;
}
if(b2){
    ret=ret+b2-a2;
}



return ret;

}

int main()
{
int t;
cin>>t;

int a[3],b[3];
cin>>a[0]>>a[1]>>a[2];
cin>>b[0]>>b[1]>>b[2];
if(a[0]+a[1]+a[2]==t&&b[0]+b[1]+b[2]==t){
int mi=min(a[0],a[1],a[2],b[0],b[1],b[2]);
int ma=max(a[0],a[1],a[2],b[0],b[1],b[2]);
cout<<mi<<" "<<ma<<endl;
}
return 0;
}