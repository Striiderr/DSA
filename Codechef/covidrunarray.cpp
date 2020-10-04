#include<bits/stdc++.h>
using namespace std;
int c=0;
bool search(int arr[], int n, int x) 
{ 
	if (arr[n - 1] == x) 
		return true; 

	int backup = arr[n - 1]; 
	arr[n - 1] = x; 
	for (int i = 0;; i++) { 
		if (arr[i] == x) { 
			arr[n - 1] = backup; 
			if (i < n - 1) 
				return true;
			return false; 
		} 
	} 
} 

int main(){
char c;
cin>>c;
int t=c-'0';
cout<<t;
   /* int t;
    cin>>t;
    while(t--){
int n,k,x,y;
cin>>n>>k>>x>>y;
int m=x;
int a[n];
int b=0;
int i = -1; 
while(i!=x)
{
    if(i==-1){
        i=x;
    }
   a[b]=i;
   b++;
   i=((i+k)%n);
}
   if(search(a,b,y)){
        cout<<"YES";
   } 
   else{
       cout<<"NO";
   }
    cout<<"\n";
    }*/
    return 0;
}