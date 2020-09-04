#include<iostream>
using namespace std;
union u{
 int i;
 char c;
};
int main()
{
	cout<<"Enter No of entries:";
	int n;
	cin>>n;
	union u a[n];
int tag[n]; 
int s=0,e=n-1;
for(int t=0;t<n;t++){
cout<<"Choose 'I' for int and 'c' for char:";
char r;
cin>>r;
if(r=='I'||r=='i'){  
  cout<<"Enter Integer:";
  cin>>a[s].i;
  s++;


	tag[t]=0;
}
else if(r=='c'||r=='C'){  
   cout<<"Enter Character:";
  cin>>a[e].c;
e--;
	tag[t]=1;}
	else 
		cout<<"Invalid Input;"; t--; continue;
}
/*for(int t=0;t<n;t++){
	cout<<tag[t]<<"  ";
}*/
cout<<"\n";
for(int t=0;t<6;t++){

if(tag[t]==0){
	cout<<a[t].i<<" ";
}
if(tag[t]==1){
	cout<<a[t].c<<" ";
}
cout<<"\n";

}
}