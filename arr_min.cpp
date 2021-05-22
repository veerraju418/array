#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<maxi)
        {
            maxi=a[i];
        }
    }
    cout<<"Minimum element "<<maxi;
}