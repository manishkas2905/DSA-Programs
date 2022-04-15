//finding two odd occuring numbers
//TC -> O(n^2)
#include<bits/stdc++.h>
using namespace std;
void two_odd(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
            if(arr[i]==arr[j])
                count++;
        if(count%2!=0)
            cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array::";
    cin>>n;
    int arr[n];
    cout<<"Enter the value in array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    two_odd(arr,n);
    return 0;
}