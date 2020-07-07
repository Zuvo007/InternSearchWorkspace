#include<iostream>
using namespace std;

int BiggestPowerOfTwo(int n)
{
    while((n&(n-1))!=0)
    {
        n=n&(n-1);
    }
    return n;
}


int main()

{
    int num;
    cout<<"enter a number :";
    cin>>num;
    int res=BiggestPowerOfTwo(num);
    cout<<"biggest power of two is :"<<res<<endl;
}



