//Rope cutting problem -> maximize the cut of the rope if possible
//TC -> o(3^n)
#include<bits/stdc++.h>
using namespace std;
int rope_cut(int n, int a, int b, int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res = max(rope_cut(n-a,a,b,c), max(rope_cut(n-b,a,b,c), rope_cut(n-c,a,b,c)));
    if(res==-1)
        return -1;
    return res+1;
}
int main()
{
    int n;
    cout<<"Enter the length of the rope::";
    cin>>n;
    int a,b,c;
    cout<<"Enter the lenght of the cut::";
    cin>>a>>b>>c;
    cout<<rope_cut(n,a,b,c);
    return 0;
}