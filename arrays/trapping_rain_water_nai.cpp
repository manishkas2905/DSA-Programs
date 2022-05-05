//trapping rain water
//TC -> theta(n^2)
#include<bits/stdc++.h>
using namespace std;
int water(int arr[], int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
            lmax = max(lmax, arr[j]);
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
            rmax=max(rmax, arr[j]);
        res=res+(min(lmax,rmax)-arr[i]);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number of blocks::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<water(arr,n);
    return 0;
}