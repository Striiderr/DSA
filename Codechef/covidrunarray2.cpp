#include<iostream>
using namespace std;
int c=0;

void op(int a[],int n,int k,int x,int y,int ter){
if(a[x==ter]){
    c++;
}
if(c==2){
    cout<<"NO";
    return;
}
 if(a[x]==y){
cout<<"YES";
return;
}
else{
x=(x+k)%n;
op(a,n,k,x,y,ter);
}}


int main(){
    int t;
    cin>>t;
    while(t--){
int n,k,x,y;
cin>>n>>k>>x>>y;
int m=x;
int a[n];
for (int i = 0; i < n; i++)
{  a[i]=i;
}

 op(a,n,k,m,y,m);
    
    cout<<"\n";
    }
    return 0;
}