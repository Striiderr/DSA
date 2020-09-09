#include<iostream>
using namespace std;
void pA(int a[], int n) {
   int i;
   for (i = 0; i < n; i++)
      cout<<a[i]<<" ";
   cout<<endl;
}
void Comb(int n, int i) {
   static int a[100];
   if (n == 0) {
      pA(a, i);
   }
   else if(n > 0) {
      int k;
      for (k = 1; k <= n; k++){
         a[i]= k;
         Comb(n-k, i+1);

      }
   }
}
int main() {
   int n ;
   cin>>n;
   
   Comb(n, 0);
   return 0;
}