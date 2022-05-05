//finding the maximum subarray sum
#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[], int n)
{
    int res=arr[0];
    int mend=arr[0];
    for(int i=1;i<n;i++){
        mend=max(mend+arr[i],arr[i]);
        res=max(res,mend);
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