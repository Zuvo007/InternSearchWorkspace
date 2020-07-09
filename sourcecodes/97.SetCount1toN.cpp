#include<iostream>
#define M 100000009
using namespace std;


int SetCount(int n)
{
    int count=0,j;
    while(n>=1)
    {

        j=n;
        while(j>=1){
        if(j&1!=0)
            count++;
            j=j>>1;}
            n--;

    }
    return count;
}

int main()
{
    int n,res;
    cout<<"enter a number ";
    cin>>n;
    res=SetCount(n)%M;
    cout<<res;


}
