#include<iostream>
using namespace std;
int main()
{int ey;
cin>>ey;
int a[ey];

for(int y=0;y<ey;y++)
{
 cin>>a[y];
}
int best=0;
for(int i=0;i<ey;i++){
 for(int j=i;j<ey;j++){
       int sum=0;
  for(int k=i;k<=j;k++){
   sum=sum+a[k];
                      }
   if(sum>best)  {
       best=sum;
}
                     }
                    }

cout<<best<<"\n";

}
