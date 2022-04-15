/*It is given that one number is missing we have to find the missing number
eg - value of n=4, so number is b/w 1-n+1, given i/p -> 1 3 4 5
o/p is 2
*/
#include<bits/stdc++.h>
using namespace std;
int miss(int arr[],int n)
{
    int res=0;
    for(int i=1;i<=n;i++)
        res=res^arr[i-1];
    for(int i=1;i<=n+1;i++)
        res=res^i;
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of array::";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<miss(arr,n);
    return 0;
}