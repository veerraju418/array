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
    int flag=0;
    //check weather given array is sorted or not
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"array is in sorted order";
    }
    else{
        cout<<"array is not in sorted order";
    }
}