#include<iostream>
using namespace std;

bool PowerOfTwo(int n)
{
    if(n==0)
        return false;
    while(n!=1)
    {
        if(n%2!=0)
            return false;
        else
            n=n/2;
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;

    if (PowerOfTwo(num))
     cout<<"yes"<<endl;
    else
        cout<<"no";
    return 0;
}

