#include<iostream>
using namespace std;


int BitDivision(int dividend,int divisor)
{
        int sign=((dividend<0)^(divisor<0))?-1:1;
        dividend=abs(dividend);


        divisor=abs(divisor);
        if(divisor>dividend) return(sign*divisor);



    int res=0,count=2,x;
    while(res>=0)
    {

       res=dividend-(divisor*(count));
        x=count>>1;
        count=(count<<1);
       
        while(dividend-x*divisor>=divisor)
        {
            x++;
        }
    }

    return (sign*x);

}


int main()
{
    int divisor,dividend,res;
    cout<<"enter the dividend :";
    cin>>dividend;
    cout<<"enter the dividor :";
    cin>>divisor;

    if(divisor==0) return -1;

     res=BitDivision(dividend,divisor);
    cout<<"quotient :"<<res;
    return -1;

}
