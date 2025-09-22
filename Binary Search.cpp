#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,key;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter Array : ";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left,right,mid;
    left = 0;
    right = n-1;
    mid = (left + right)/2;
    cout<<"Enter Search key : ";
    cin>>key;
    while(left <= right)
    {
        if(key<arr[mid])
        {
            right = mid -1;
        }
        else if (key > arr[mid])
        {
            left = mid + 1;
        }
        else if (key == arr[mid])
        {
            cout<<"Found at Index : "<<mid;
            break;
        }
        mid = (left + right)/2;
    }
    if(left>right)
    {
        cout<<"Not Found";
    }

}
