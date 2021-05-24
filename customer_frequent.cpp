#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int cust[n];
    for(i=0;i<n;i++)
    {
        cin>>cust[i];
    }
    int *maxi=max_element(cust,cust+n);
    int freq[*maxi+1]={0};
    for(i=0;i<*maxi;i++)
    {
        freq[cust[i]]++;
    }
    int reg,max=0;
    for(i=0;i<=*maxi;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            reg=i;
        }
    }
    cout<<"customer "<<reg<<" visited more times";
}