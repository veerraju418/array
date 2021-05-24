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
    map<int,int>freq;
    for(i=0;i<n;i++)
    {
        freq[cust[i]]++;
    }
    int count=0,id;
    for(auto itr:freq)
    {
        if(itr.second>count)
        {
            count=itr.second;
            id=itr.first;
        }
    }
    cout<<"customer "<<id<<" visited "<<count<<" number of times";
}