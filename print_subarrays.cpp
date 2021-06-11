#include<iostream>
using namespace std;
//print the subarrays of array
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)//starting point
	{
		for(int j=i;j<n;j++)//ending point
		{
			for(int k=i;k<=j;k++)//traverse from starting to ending to print elements
			{
				cout<<a[k]<<" ";
			}
			cout<<"\n";
		}
	}
}
