//checking whether an array is sorted or not
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
        if(arr[i]<arr[i-1])
            return false;
    return true;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(sorted(arr,n))
        cout<<"Sorted";
    else
        cout<<"Not Sorted";
    return 0;
}