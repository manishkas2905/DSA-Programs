//stock buy and sell problem
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
int profit(int arr[], int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[i-1])
            profit=profit+(arr[i]-arr[i-1]);
    return profit;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<profit(arr,n);
    return 0;
}