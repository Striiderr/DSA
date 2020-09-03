#include<iostream>
#include <algorithm> 
using namespace std;
int main(){

int n;
cin>>n;
char t[n];
for(int u=0;u<n;u++){
cin>>t[u];
}
sort(t,t+n);
for(int i=0;i<n;i++){
cout<<t[i]<<"  ";
}

}
