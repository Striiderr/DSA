#include<bits/stdc++.h>
using namespace std;

int main(){
int i=5,*p,j=7,*q;
p=&i;
q=&j;
cout<<i<<j<<*p<<*q<<endl;
*p=i+*q;
cout<<i<<j<<*p<<*q<<endl;
j=*p+i;
cout<<i<<j<<*p<<*q<<endl;
p=q;

j=*p+i;
cout<<i<<j<<*p<<*q<<endl;
i=*q+j;
cout<<i<<j<<*p<<*q;


    return 0;

}
