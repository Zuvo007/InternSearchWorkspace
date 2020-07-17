#include<iostream>
using namespace std;





int SetBitCount(int x)
{
    int count=0;
    while(x>0)
    {
        if((x&1)!=0)
            count++;
        x=(x>>1);
    }
   return count;

}

bool IsBleak(int num)
{
    int x=num/2;

    while(x<num && x>0)
    {
        if(x+SetBitCount(x)==num)
            return false;
        x++;
    }
    return true;
}





int main()
{
    int num;
    cout<<"enter a number :";
    cin>>num;
    if(IsBleak(num))
        cout<<num<<" is a bleak number";
    else if(!(IsBleak(num)))
        cout<<num<<" is not a bleak number";
    return 0;

}
