#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key,index=-1;
    cout<<"Enter element to delete"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            index=i;
            break;
        }
    }
    if(index==-1)
    {
        cout<<"Element not found in the array"<<endl;
    }
    else{
        for(int i=index;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}