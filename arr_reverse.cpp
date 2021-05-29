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
    int first=0;
    int last=n-1;
    while(1)
    {
        swap(a[first],a[last]);
        first++;
        last--;
        if(first==last)
        {
            break;
        }
    }
    cout<<"Array after reversing"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}