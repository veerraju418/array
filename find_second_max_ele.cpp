#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int first=a[0],second=INT_MIN;
    //find the max element in array
    for(int i=1;i<n;i++)
    {
        if(first<a[i])
        {
            first=a[i];
        }
    }
    //find the second max element ignore max element
    for(int i=0;i<n;i++)
    {
        if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }   
    }
    cout<<"Second max element in array is "<<second;
}