#include<iostream>
#include<math.h>
using namespace std;



int Multiplication(int a,int b)
{
    int sign=((a<0)^(b<0))?-1:1;
    int x=abs(a);
    int y=abs(b);

    if(x==1)
        return y;
    if(x%2!=0)
        return sign*(y+Multiplication((x>>1),(y<<1)));
    if(x%2==0)
        return sign*Multiplication((x>>1),(y<<1));
}

int main(){

    int x,y,res;
    cout<<"enter two numbers";
    cin>>x>>y;
    if(x==0||y==0) cout<<0;
    else{
    res=Multiplication(x,y);
    cout<<res;
    }
    return 0;

}
