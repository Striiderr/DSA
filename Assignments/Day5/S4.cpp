#include<iostream>
#include<string>
#include<cstring>
#include<stack>

using namespace std;
bool brac(char a,int &br){
char sy[1]={a};
//cout<<sy;
	int res=strcmp(sy,"(");
	int res1=strcmp(sy,"[");
	int res2=strcmp(sy,"{");
	//cout<<res<<" "<<res1<<" "<<res2<<"\n";
	if(res==0){
		br=1;return true;}
	else if(res1==0){br=2;return true;}
	else if(res2==0){br=3;return true;}
	else 
		return false;
}
int ebrac(char a){
char sy[1]={a};
//cout<<sy;
int s;
	int res=strcmp(sy,")");
	int res1=strcmp(sy,"]");
	int res2=strcmp(sy,"}");
	//cout<<res<<" "<<res1<<" "<<res2<<"\n";
	if(res==0)      {s=1;return s;}
	else if(res1==0){s=2;return s;}
	else if(res2==0){s=3;return s;}
	else 
		return 0;
}
int main(){
string input;
cin>>input;

int len=input.length();
stack<char> s;
int br;
int i=0;
while(i<len){
	//if(s.empty()){
	//cout<<"No";
    //return 0;
	//}
	if(brac(input[i],br)){
		s.push(input[i]);
		//cout<<s.top();
	}
	else if(s.empty()){
    cout<<"No";
    return 0;
    }
  else{
  	int t;
  	bool e=brac(s.top(),t);
    //cout<<t<<" ";
  	int r=ebrac(input[i]);
  	//cout<<r<<" ";
   
   if(r==t){
    s.pop();
   }

   else{ 
   	cout<<"No";
    return 0;
       }

  }
i++;
 }
cout<<"Yes";
//(s.top==-1)?cout<<"Yes":cout<<"No";
return 0;
}