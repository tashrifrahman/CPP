#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,key;
    cout<<"The array size : ";
    cin>>n;
    int arr[n];
    cout<<"The array is :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array after Sorting :";
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nLets say we want to search for : ";
    cin>>key;
    cout<<"\n\nNow, we do the binary search :";
    if(binary_search(arr,arr+n,key))
        cout<<"\nElement Found";
    else
        cout<<"\nElement Not Found";
    return 0;
}
