#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,key;
    cout<<"Enter array Size : ";
    cin>>n;
    cout<<"Enter Array : ";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Searching Key : ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Found at Index "<<i;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Not Found";
    }
    return 0;
}
