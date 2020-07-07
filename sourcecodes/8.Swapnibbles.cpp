#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int SwapNibbles(int x)
{
    return ((x&0x0F)<<4|(x&0xF0)>>4);
}
int main()
{
    int x,t,res;
    cout<<"enter the number of testcases :";
    cin>>t;

    while(t--)
    {
        cout<<"enter a number";
        cin>>x;
       res = SwapNibbles(x);
       cout<<res<<endl;
    }
    return 0;

}
