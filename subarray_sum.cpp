#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum;
	cin>>sum;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			
			int s=0;
			for(int k=i;k<=j;k++)
			{
				s=s+a[k];	
			}
			
			if(s==sum && flag!=1)
			{
				cout<<"Yes";
				flag=1;
				break;
			}
			
		}
	}
	if(flag==0)
	{
		cout<<"No";
	}
}
