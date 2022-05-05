//searching in an unsorted array
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n, int x)
{
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            return i;
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" element in array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x;
    cout<<"Enter element want to search::";
    cin>>x;
    cout<<search(arr,n,x);
    return 0;
}