#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>yogurt(n);
    for(int i=0;i<n;i++)
    {
        cin>>yogurt[i];
    }
    int maxYogurt = *max_element(yogurt.begin(),yogurt.end());
    int farthest  = 0;
    for(int i=0;i<n;i++)
    {
        if(yogurt[i] == maxYogurt)
        {
            farthest = max(farthest,abs(i-0));
        }
    }
    cout<<farthest+1<<endl;
    return 0;
}
