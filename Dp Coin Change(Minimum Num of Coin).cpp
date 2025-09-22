//Minimum Number of Coin.
#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int coin[100];
int main()
{
    int n,w;
    cout<<"Coin : ";
    cin>>n;
    cout<<"Weight : ";
    cin>>w;
    for(int i=1; i<= w ; i++)
    {
        dp[0][i] = INT_MAX;
    }
    cout<<"Enter all Coin : ";
    for(int i=0; i<n; i++)
    {
        cin>>coin[i];
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=w; j++)
        {
            if( coin[i-1] > j)
            {
                dp[i][j] =dp[i-1][j];
            }
            else
                dp[i][j] = min(dp[i-1][j],dp[i][j-coin[i-1]]+1);
        }
    }
    cout<<"Full DP simulation process is :"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=w; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The minimum number of coin is : " << dp[n][w]<<endl;
    return 0;
}

