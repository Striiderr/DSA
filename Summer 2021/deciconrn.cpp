#include<bits/stdc++.h>
using namespace std;

void convert (int n,int b){
if(n<b){
    cout<<n;
}
else {
    convert(n/b,b);
((n%b)>9)?cout<<char(55+(n%b)):cout<<n%b;

}

int main(){
 int v,u;
 cin>>u>>v;
 convert(u,v);
cout<<endl;

return 0;
}
