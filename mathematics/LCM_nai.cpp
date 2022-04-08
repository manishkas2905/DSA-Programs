//LCM of two number
//TC -> O(a*b(max(a,b)))
#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
            break;
        res++;
    }
    return res;
}
int main()
{
    int a,b;
    cout<<"Enter two number::";
    cin>>a>>b;
    cout<<"LCM::"<<lcm(a,b);
    return 0;
}