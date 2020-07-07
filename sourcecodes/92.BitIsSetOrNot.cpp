#include<iostream>
#include<algorithm>
using namespace std;

 void BinaryConversion(int array[],int n)
{
    int i=0,j,count=0;
    while(n>0)
    {
        array[i]=n%2;
        n=n/2;
        i++;
    }

    cout<<"bit setting  calculation started :"<<endl;
    for(j=i-1;j>=0;j--)
    {
        if(array[j]==1)
            cout<<"bit "<<j<<" "<<"is set"<<endl;
        else
         cout<<"bit "<<j<<" "<<"is not set"<<endl;

    }

}

int main()
{
    int a[100],i,n;
    cout<<"enter a  decimal number :";
    cin>>n;
   BinaryConversion(a,n);


}
