//Tower of hanoi
#include<bits/stdc++.h>
using namespace std;
void toh(int n, char A, char B, char C)
{
    if(n==1)
    {
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    toh(n-1,A,C,B);
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    toh(n-1,B,A,C);
}
int main()
{
    int n;
    cout<<"Enter the number of disk::";
    cin>>n;
    char a='A',b='B',c='C';
    toh(n,a,b,c);
    return 0;
}