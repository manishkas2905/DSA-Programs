//finding how many subset have sum equal to given sum
//TC-> theta(2^n)
#include<bits/stdc++.h>
using namespace std;
int subset_sum(int arr[],int n, int sum)
{
    if(n==0)
        return (sum==0)?1:0;
    return subset_sum(arr,n-1,sum)+subset_sum(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int n,sum;
    cout<<"Enter the size of array and sum::";
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<subset_sum(arr,n,sum);
    return 0;
}