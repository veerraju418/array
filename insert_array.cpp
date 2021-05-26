#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cap,no,i;
    cout<<"Enter size of array"<<endl;
    cin>>cap;
    cout<<"Enter no of elments in array"<<endl;
    cin>>no;
    if(no>cap)
    {
        cout<<"You cannot insert elements into array"<<endl;
        exit(0);
    }
    else{
        int arr[cap];
        for(i=0;i<no;i++)
        {
            cin>>arr[i];
        }
        int index,pos,ele,i;
        cin>>pos;
        cin>>ele;
        index=pos-1;
        for(i=no-1;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=ele;
        no++;
        cout<<"Elements after insertion"<<endl;
        for(i=0;i<no;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}