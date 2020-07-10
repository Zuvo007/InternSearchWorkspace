#include<iostream>
using namespace std;


int CountTrailingZeros(int n){
    int count=0;

    while(n!=0)
    {
        if((n&1)==1)
            break;
            count++;
        n=n>>1;
    }
    return count;

}
int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;
    cout<<"number of trailing zeros are :"<<CountTrailingZeros(n);

}
