#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int aa[n];
for(int d=0;d<n;d++){
  cin>>aa[d];
}
int best = 0;
for (int a = 0; a < n; a++) {
int sum = 0;
for (int b = a; b < n; b++) {
sum =sum + aa[b];
best = max(best,sum);
}
}
cout << best << "\n";
}
