//Check whether a number is prime or not
// TC-> O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1)
        return false;
    for(int i=2;i*i<n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    if(isPrime(n))
        cout<<"Number is Prime";
    else
    cout<<"Not Prime";
    return 0;
}