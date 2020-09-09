#include<iostream>
using namespace std;
void win(int a[],int l,int h){

while(a[l+1]>a[l]){
l++;
}
while(a[h-1]<a[h]){
h--;}

cout<<"Sort the array from Index "<<l<<" to "<<h<<endl;
}
int main(){
int a[8]= { 1, 3, 2, 7, 5, 6, 4, 8 } ;
win(a,0,7);
	return 0;
}