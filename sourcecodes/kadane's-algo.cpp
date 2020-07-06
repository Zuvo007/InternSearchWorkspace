//Kadane's Algorithm

#include<iostream>
#include<vector>
using namespace std;
int MaxSumSubArray( int arr[],int n);



int MaxSumSubArray( int arr[],int n)
{
    int max_sum;
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum<0)
            sum=0;
        if(sum>max_sum)
            max_sum=sum;
    }
    return max_sum;
}

int main()
{
    int n,i,result;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter an array";
    int arr[10];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"the result is";
    result=MaxSumSubArray(arr,n);
    cout<<result;
    return 0;
}
