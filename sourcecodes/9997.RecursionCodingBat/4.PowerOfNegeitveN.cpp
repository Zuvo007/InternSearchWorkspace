#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double NegetivePow(double num,int power)
{
    //base case
    if(power==0)
        return 1;
        //when power is even
    if(power%2==0)
        return (NegetivePow(num,power/2))*(NegetivePow(num,power/2));
        else
            //when power is odd
            return ((1/num)*NegetivePow(num,(power-1)/2)*NegetivePow(num,(power-1)/2));
}

int main()
{
    double x,n,result;
    cout<<"Enter a number :";
    cin>>x;
    cout<<"Enter a negative power for the "<<x<<":";
    cin>>n;
    result=NegetivePow(x,abs(n));
    cout<<fixed<<result;
}
