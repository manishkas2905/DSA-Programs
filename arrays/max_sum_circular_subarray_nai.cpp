//finding the maximum circular subarray sum
#include<bits/stdc++.h>
using namespace std;
int maxcs(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for(int j=1;j<n;j++)
        {
            int ind=(i+j)%n;
            curr_sum=curr_sum+arr[ind];
            curr_max=max(curr_max, curr_sum);
        }
        res=max(res,curr_max);
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
    cout<<maxcs(arr,n);
    return 0;
}