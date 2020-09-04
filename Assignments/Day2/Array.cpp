#include<iostream>

using namespace std;
int main(){
	cout<<"Enter No of entries:";
	int n;
	cin>>n;
	int s=0,e=n-1;
int a[n];

for(int t=0;t<n;t++){
cout<<"Choose 'B' for Beginning and 'E' for End:";
char r;
cin>>r;
if(r=='b'||r=='B'){  
  cout<<"Enter Integer:";
  cin>>a[s];
  s++;


	
}
else if(r=='e'||r=='E'){  
   cout<<"Enter Integer:";
  cin>>a[e];
  e--;

	}
	else {
		cout<<"Invalid Input;\n"; t--; continue;
	}
	

}

for(int t=0;t<n;t++){
cout<<a[t]<<"  ";

}
cout<<endl;

return 0;
}

