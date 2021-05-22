//find the regular customer to give discount
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cust[]={2,2,1,3,2,7,9,1,2,1},count=0,i,j;
	int reg=cust[0];
	int freq;
	for(i=0;i<10;i++)
	{
		freq=0;
		for(j=0;j<10;j++)
		{
			
			if(cust[i]==cust[j])
			{
				freq++;
			}
		}
		if(freq>count)
		{
			count=freq;
			reg=cust[i];
		}	
	}
	cout<<"customer "<<reg<<" will get discount";
}
