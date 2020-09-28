#include<iostream>
using namespace std;
int n;
void recursion(int [],int ,int, int );
void recursion(int array[],int i,int n, int j)
{
    if(i==n)
    {
        return;
    }
    if(j<n+1 && i<n+1)
    {
        int temp;
        temp = array[j];
        if(temp>array[j+1])
        {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
        recursion(array,i,n,j+1);
    }
    else{
        j=0;
        recursion(array,i+1,n,j);
    }

}

int main()
{
    int i,j;
    int n=6;
    int array[n] = {10,23,42,43,12};
    
    recursion(array,0,n-1,0);
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }

}
