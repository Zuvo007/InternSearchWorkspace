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
    cout<<"binary conversion is :";
    for(j=i-1;j>=0;j--)
    {
        cout<<array[j];
        if(array[j]==1)
            count++;
    }
    cout<<endl<<"The total no of 1's is :"<<count;

}

int main()
{
    int a[100],i,n;
    cout<<"enter a  decimal number :";
    cin>>n;
   BinaryConversion(a,n);


}

