//left shift, right shift
#include<bits/stdc++.h>
using namespace std;
void left_shif()
{
    //left shift:x<<y, hence o/p -> x*2^y
    cout<<"Left shift::"<<endl;
    int x=3;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;
    int y=4;
    int z=(x<<y);
    cout<<z<<endl;
}
void right_shift()
{
    //right shift-> x>>y, hence o/p -> x/(2^y)
    cout<<"Right Shift::"<<endl;
    int x=33;
    cout<<(x>>1)<<endl;
    cout<<(x>>2)<<endl;
    int y=4;
    int z=(x>>y);
    cout<<z<<endl;
}
void not_op()
{
    cout<<"Not Operator unsigned::"<<endl;
    unsigned int x=1;
    cout<<(~x)<<endl;
    x=5;
    cout<<(~x)<<endl;
    cout<<"Not Operator signed::"<<endl;
    int y=1;
    cout<<(~y)<<endl;
    y=5;
    cout<<(~y)<<endl;
}
int main()
{
    left_shif();
    right_shift();
    not_op();
    return 0;
}