#include<iostream>
using namespace std;



int SwappingOddEvenBits(unsigned int num)
{   int swap;
    int odd=num&0xAAAAAAAA;
    int even=num&0x55555555;
    swap=((odd>>1)^(even<<1));
    return swap;


}



int main()
{
  unsigned int x,res,t;
    cin>>x>>t;
    while(t--){
    if(t==0) break;
    res=SwappingOddEvenBits(x);
    cout<<res<<endl;
    cout<<t;}


}
