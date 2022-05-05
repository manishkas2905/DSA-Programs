//finding the maximum sum of circular subarray
#include<bits/stdc++.h>
using namespace std;
int nmax_sum(int arr[], int n)
{
    int res=arr[0];
    int max_end=arr[0];
    for(int i=1;i<n;i++)
    {
        max_end=max(arr[i]+max_end, arr[i]);
        res=max(max_end, res);
    }
    return res;
}
int maxsum(int arr[], int n)
{
    int max_normal = nmax_sum(arr,n);
    if(max_normal<0)
        return max_normal;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int check = nmax_sum(arr,n);
    int max_cir = arr_sum+nmax_sum(arr,n);
    return max(max_normal, max_cir);
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxsum(arr,n);
    return 0;
}