#include<iostream>
using namespace std;
int n;
#define n 9
int main()
{
	int array[n],i,j;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int count;
	for(int i=0;i<n;i++)
	{  
        if (array[i]%2==0)
        {
        count++;
        }
    }
	for(i=0;i<count;i++)        
	{
		for(j=n-1;j>0;j--)
		{
			if(array[j]%2 == 0)
			{
				int temp ;
				temp = array[j];
				array[j] = array[j-1]; 
				array[j-1] = temp;
				 
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}