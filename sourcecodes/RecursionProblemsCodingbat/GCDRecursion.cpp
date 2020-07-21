#include<iostream>
using namespace std;

int GetGcd(int num1,int num2)
{

   int a=abs(num1);
   int b=abs(num2);
   int q=a/b;
   int r=a%b;
   if(r==0)
        return b;
   a=b*q+r;
   GetGcd(b,r);

}

int main()
{
    int a,b,res;
    cout<<"enter the two numbers :";
    cin>>a>>b;
    res=GetGcd(a,b);
    cout<<res;
    return 0;
}
