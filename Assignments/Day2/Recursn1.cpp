#include<iostream>
using namespace std;
void convert(int n, int b){
if(n<b)
   {cout<<n;}
   else{
   	convert(n/b,b);
   	n%b>9?cout<<char(55+(n%b)): cout<<n%b;
}
    }
int main(){
int n,b;
cin>>n;
cin>>b;
convert(n,b);


}

 
