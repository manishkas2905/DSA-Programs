//finding the maximum sum subarray
#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[j];
            res=max(res, curr);
        }
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<max_sum(arr,n);
    return 0;
}