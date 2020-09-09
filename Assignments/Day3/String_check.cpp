#include<iostream>
#include<cstring>
using namespace std;

bool check(char a[],char b[],int n,int s){
if(s<0){
	return true;
}
if(n<0&&s>=0){
	return false;
}
if(b[s]==a[n]){
    return check(a,b,n-1,s-1);
    }

return false;
}
bool func(char a[],char b[],int n,int s){

if(n<0){
	return false;

}
if(a[n]==b[s]){
   if(check(a,b,n,s)){
	return true;
       }
   else{
   return func(a,b,n-1,s);

   }    
}
return func(a,b,n-1,s);

}




int main(){
char a[10];
cin.getline(a,10);
char b[3];
cin.getline(b,3);
if(func(a,b,9,2)){
	cout<<" Yes";
}
else{
	cout<<" No";
}

}