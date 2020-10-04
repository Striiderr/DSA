#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){int t;t=a;a=b;b=t;}

bool in(int a[], int n,int ar){
for(int i=0;i<=ar;i++){
    if(n==a[i]){
    return true;
}}
return false;
}

int main() {
    int t;cin>>t;
while(t--){
  int N,X,p,k;
  cin>>N>>X>>p>>k;
  p--; k--;
  int n=N,a[N],i=0;

while(i<N){cin>>a[i];i++;}

  sort(a,a+N);
 
 // print int ii=0; while(ii<N){ cout<<a[ii]<<" ";ii++;}   cout<<endl;
  
  int op=0;
  if(!in(a,X,N)){
      cout<<-1;
     return 0;
  }
  if(a[p]==X){
      cout<<op;
  }
  else {
  while(a[p]!=X){
      if(k>p){
        if(X<a[k]){
            a[k]=a[0];
            sort(a,a+N);
            op++;
        }  
        else{
            cout<<-1;
             return 0;
        }
          
      }
      else if(p>k){
           if(X>a[k]){
            a[k]=a[N-1];
            sort(a,a+N);
            op++;
        }  
        else{
            cout<<-1;
            return 0;
        }
      }
        else{
            cout<<1;
           return 0;
        }
      }
     cout<<op;
     }
      }
  	return 0;
    }
