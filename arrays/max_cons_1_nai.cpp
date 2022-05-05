//finding maximum consecutive 1's
#include<bits/stdc++.h>
using namespace std;
int maxc(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
                curr++;
            else
                break;
        }
        res=max(res, curr);
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
    cout<<maxc(arr,n);
    return 0;
}