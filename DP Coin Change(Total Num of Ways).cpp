//Total Number of ways.
#include<bits/stdc++.h>
using namespace std;

int dp[200][200];
int coin[200];
int main()
{
    dp[0][0]=1;
    int n,w;
    cout<<"Coin  :";
    cin>>n;
    cout<<"Weight : ";
    cin>>w;
    cout<<"Enter all coins : ";
    for(int i=1; i<=n; i++)
    {
        cin>>coin[i];
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=w; j++)
        {
            if(i>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                int x=j-coin[i];
                dp[i][j]=dp[i-1][j]+dp[i][x];
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=w; j++)
        {
            cout << dp[i][j]<<" ";
        }
        cout << endl;
    }
    cout<<"The total number of way is : "<<dp[n][w]<<endl;
    return 0;
}
