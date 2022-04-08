//LCM of two number
//TC -> O(log(min(a,b)))
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm_eff(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cout<<"Enter two number::";
    cin>>a>>b;
    cout<<"LCM::"<<lcm_eff(a,b);
    return 0;
}