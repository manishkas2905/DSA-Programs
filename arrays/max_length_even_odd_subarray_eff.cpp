//findling lenght of max odd even subarray
#include<bits/stdc++.h>
using namespace std;
int leo(int arr[], int n)
{
    int curr=1,res=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || arr[i-1]%2==0 && arr[i]%2!=0)
        {
            curr++;
            res=max(res,curr);
        }
        else
            curr=1;
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
    cout<<leo(arr,n);
    return 0;
}