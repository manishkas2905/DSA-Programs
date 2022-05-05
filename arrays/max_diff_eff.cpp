//finding the difference between the element of array
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
int maxd(int arr[], int n)
{
    int res=arr[1]-arr[0],minv =arr[0];
    for(int j=1;j<n;j++)
    {
        res=max(res, arr[j]-minv);
        minv=min(minv, arr[j]);
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
    cout<<maxd(arr,n);
    return 0;
}