//trailing zero in a factorial
//TC -> O(n)
#include<bits/stdc++.h>
using namespace std;
int trail(int n)
{
    int res=0;
    int fact=1;
    for(int i=2;i<=n;i++)
        fact=fact*i;
    while(fact%10==0)
    {
        res++;
        fact=fact/10;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    cout<<trail(n);
    return 0;
}