#include<iostream>
using namespace std;
int FindTheSingleOne(int arr[],int n)
{
    int i,res=0;
    for(i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    return res;
}

int main()
{
    int arr[100],n,result,i;
    cout<<"Enter an odd size of the array :";
    cin>>n;
    if(n==0 || n<=0) return -1;
    else{
    cout<<"Enter the array elenents :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    result=FindTheSingleOne(arr,n);
    cout<<"The single element is :"<<result;
    }
    return -1;

}
