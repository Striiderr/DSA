#include<iostream>
#include<cstring>
using namespace std;

bool check(char *a,char *b){
if(*b=='\0'){
	return true;
}

if(*a=='\0'&&*b!='\0'){
	return false;
}

if(*a==*b){

    return check(a+1,b+1);

    }

return false;
}
bool func(char *a,char *b){

if(*a=='\0'){
	return false;

}
if(*a==*b){
   if(check(a,b)){
	return true;
       }
   else{
   return func(a+1,b);

   }    
}
return func(a+1,b);

}




int main(){
char a[100];
cin.getline(a,100);
char b[100];
cin.getline(b,100);

if(func(a,b)){
	cout<<"Yes";
    }
else{
cout<<"No";
    }
return 0;
}