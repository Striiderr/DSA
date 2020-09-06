#include<iostream>
using namespace std;
union u{
 int i;
 char c;
};
int main()
{

	int n;
n=9;
	union u a[n];
int tag[n]; 

for(int t=0;t<n;t++){

if(t%2==0){  
  cin>>a[t].i;


	tag[t]=0;
}
else if(t%2!=0){  
  cin>>a[t].c;

	tag[t]=1;}

}
/*for(int t=0;t<n;t++){
	cout<<tag[t]<<"  ";
}*/
for(int t=0;t<n;t++){

if(tag[t]==0){
	cout<<a[t].i<<" ";
}
if(tag[t]==1){
	cout<<a[t].c<<" ";
}


}

return 0;
}
