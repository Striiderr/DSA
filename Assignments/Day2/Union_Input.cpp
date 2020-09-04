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

for(int t=0;t<n;t++){
cout<<"Choose 'I' for int and 'c' for char:";
char r;
cin>>r;
if(r=='I'||r=='i'){  
  cout<<"Enter Integer:";
  cin>>a[t].i;


	tag[t]=0;
}
else if(r=='c'||r=='C'){  
   cout<<"Enter Character:";
  cin>>a[t].c;

	tag[t]=1;}
	else 
		cout<<"Invalid Input;";
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


}
cout<<endl;
return 0;
}