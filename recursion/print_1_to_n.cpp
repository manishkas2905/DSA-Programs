//printing number from 1 to n
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
void print1ton(int n)
{
    if(n==0)
        return;
    print1ton(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    print1ton(n);
    return 0;
}