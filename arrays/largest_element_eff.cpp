//finding the index of largest element
#include<bits/stdc++.h>
using namespace std;
int large(int arr[], int n)
{
    int res=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[res])
            res=i;
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
    cout<<large(arr,n);
    return 0;
}