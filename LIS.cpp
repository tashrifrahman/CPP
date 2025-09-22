#include<bits/stdc++.h>
using namespace std;
//function to find LIS
int LIS(int arr[],int n){
   int dp[n];
      dp[0]=1;
      for(int i=1;i<n;i++){
          dp[i]=1;
          for(int j=0;j<i;j++){
              if(arr[i]>arr[j]){
                  dp[i]=max(dp[i],dp[j]+1);
              }
          }
      }
    return *max_element(dp,dp+n);
}
int main() {
  int arr[]={3,4,-1,0,6,2,3};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<"Longest increasing subsequence is:"<<" ";
  cout<<LIS(arr,size)<<endl;
  return 0;
}
