//removing duplicates from an array
#include<bits/stdc++.h>
using namespace std;
int rem_dup(int arr[], int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=temp[res-1])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
        arr[i]=temp[i];
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
    n=rem_dup(arr,n);
    cout<<"value for n is::"<<n<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}