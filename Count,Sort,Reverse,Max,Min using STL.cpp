#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Array is :";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\nArray after soting is : ";
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\nArray after Reversing is :";
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\nMaximum element of array is :";
    cout<<*max_element(arr,arr+n);
    cout<<"\nMinimum element of array is :";
    cout<<*min_element(arr,arr+n);
    cout<<"\n\nThe summation of array elements is :";
    cout<<accumulate(arr,arr+n,0);
    cout<<"\n\nSearching key:";
    int key;
    cin>>key;
    cout<<"\n\nIndex number of searching key :";
    cout<<count(arr,arr+n,key);
    return 0;
}
