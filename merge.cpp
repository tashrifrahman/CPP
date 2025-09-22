#include<bits/stdc++.h>
using namespace std;
int a[1000];

void merge(int a[],int p,int q,int r)
{
    int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    int l[n1+1],R[n2+1];
    for(i=1;i<=n1;i++)
    {
        l[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        R[j]=a[q+j];
    }
    l[n1+1]=1000;
    R[n2+1]=1000;
    i=1;j=1;
    for(k=p;k<=r;k++)
    {
        if(l[i]<=R[j])
        {
            a[k]=l[i];
            i=i+1;
        }
        else
        {
            a[k]=R[j];
             j=j+1;
        }
    }
}
void merge_sort(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
