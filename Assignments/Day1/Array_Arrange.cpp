#include<iostream>
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int t = *x;  
    *x = *y;  
    *y = t;  
}  
void Arrange(int a[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++) {            
    for (j = 0; j < n-i-1; j++)  {
        if (a[j]%2!=0){  
            swap(&a[j], &a[j+1]);  }}
    }
}  
void print(int a[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << a[i] << " ";  
    cout << endl;  
}  
int main()  

{
int s;  cout<<"Enter Size of Array:";
cin>>s;
int a[s];
cout<<endl<<"Enter "<<s<< "Numbers:"<<endl;
for(int y=0;y<s;y++){
	cin>>a[y];
 }
    Arrange(a, s);  
    cout<<"Sorted array: \n";  
    print(a, s);  
    return 0;  
}  