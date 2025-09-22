#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > key)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
