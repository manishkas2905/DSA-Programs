//by using prefix sum technique
#include<bits/stdc++.h>
using namespace std;
bool point(int arr[], int n)
{
    int asum=0;
    for(int i=0;i<n;i++)
        asum+=arr[i];
    int lsum=0;
    for(int i=0;i<n;i++)
    {
        if(lsum==(asum-arr[i]))
            return true;
        lsum+=arr[i];
        asum-=arr[i];
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(point(arr,n))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}