#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,first,second,third;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    third = first = second = INT_MIN;
    for(i=0;i<n;i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }

        else if(arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }

        else if(arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    }

    cout << "Three largest elements are "<<first<<" "<<second<<" "<<third<<endl;
    return 0;
}
