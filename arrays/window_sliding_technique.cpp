//max sum of k consecutive element
//subarray with given sum
#include<bits/stdc++.h>
using namespace std;
int ksum(int arr[], int n, int k)
{
    int csum=0;
    for(int i=0;i<k;i++)
        csum+=arr[i];
    int msum=csum;
    for(int i=k;i<n;i++)
    {
        csum+=(arr[i]-arr[i-k]);
        msum=max(msum,csum);
    }
    return msum;
}
bool givensum(int arr[], int n, int sum)
{
    int csum=arr[0],s=0;
    for(int e=1;e<n;e++)
    {
        while(csum>>sum && s<e-1)
        {csum-=arr[s];s++;}
        if(csum==sum)   return true;
        if(e<n) csum+=arr[e];
    }
    return (csum==sum);
}
int main()
{
    int n,k,sum;
    cout<<"Enter the size of an array::";
    cin>>n;
    cout<<"Enter the value of k::";
    cin>>k;
    cout<<"Enter the value for sum::";
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<ksum(arr,n,k);
    if(givensum(arr,n,sum))
        cout<<"\nTrue";
    else
        cout<<"\nFalse";
    return 0;
}