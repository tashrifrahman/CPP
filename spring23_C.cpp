#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,m,balls[n],rattles[m];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>balls[i];
        }
        for(j=0;j<m;j++)
        {
            cin>>rattles[j];
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<balls[i]<<" ";
    }
    for(j=0;j<m;j++)
    {
        cout<<rattles[j]<<" ";
    }
}
