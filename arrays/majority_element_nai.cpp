//majority element -> element which appear greater than n/2 times
#include<bits/stdc++.h>
using namespace std;
int majority(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int curr=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                curr++;
        }
        if(curr>(n/2))
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<majority(arr,n);
    return 0;
}