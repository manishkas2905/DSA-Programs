//Finding only one odd occuring number
//TC -> O(n^2)
#include<bits/stdc++.h>
using namespace std;
int odd(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
            if(arr[j]==arr[i])
                count++;
        if(count%2!=0)
            return arr[i];
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array::";
    cin>>n;
    int arr[n];
    cout<<"Enter element in an array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<odd(arr, n);
    return 0;
}