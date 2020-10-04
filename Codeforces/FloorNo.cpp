#include<iostream>
using namespace std;

int calc(int app,int pno){
int floor;
if(pno==1||pno==2){
return 1;
}
else{
pno=pno-2;
if(pno%app==0){
    int ret=pno/app;
    return ret+1;
}
else if(pno%app!=0){
    return (pno/app+2);
}

}
return 0;
}

int main(){
int t;
cin>>t;
while(t--){
int pno,app;
cin>>pno;
cin>>app;
int y=calc(app,pno);
cout<<y<<endl;
}


    return 0;
}
