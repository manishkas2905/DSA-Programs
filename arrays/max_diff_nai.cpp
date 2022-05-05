//finding max difference between element of an array
//TC -> O(n^2)
#include<bits/stdc++.h>
using namespace std;
int maxd(int arr[],int n)
{
    int res=arr[1]-arr[0];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            res=max(res,arr[j]-arr[i]);
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
    cout<<maxd(arr,n);
    return 0;
}