#include <iostream>
#include <string>
using namespace std;

string fab(string a,string b,int n){
	if(n==1){
		return b; 
	}
	else if(n==0)
		return a;

	else{
      return fab(a,b,n-2)+fab(a,b,n-1);
    
	}


} 
int main(){
int n;
cin>>n;
string w=fab("a","bc",n);
cout<<w;
	return 0;
}
