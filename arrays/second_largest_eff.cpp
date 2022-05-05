//finding the secong largest element in an array
#include<bits/stdc++.h>
using namespace std;
int seclarge(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[res]<arr[i])
                res=i;
        }
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
    cout<<seclarge(arr,n);
    return 0;
}