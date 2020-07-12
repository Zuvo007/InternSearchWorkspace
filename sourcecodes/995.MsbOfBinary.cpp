#include<iostream>
using namespace std;


int MSB(int i)
{
    i |= (i >>1);
    i |= (i >>2);
    i |= (i >>4);
    i |= (i >>8);
    i |= (i >>16);
    return i -(i >>1);
}


int main()
{
    int c,res;
    cout<<"enter a number :";
    cin>>c;
        res=MSB(c);
        cout<<res;
}
