#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int FindTheSingleOne(int a[],int n)
{
    int i=0,res=0,p;
    if(n==1)
    return a[i];



   while(i<n-1)
    {

      if(a[i]!=a[i+1])
         return a[i];
     i+=3;

    }
    return a[i];


}

int main()
{
    int arr[100],n,result,i;
    cout<<"Enter size of the array :";
    cin>>n;

    if(n<=0)
        return -1;

    else{
            cout<<"Enter the array elenents :";
        for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        sort(arr+0,arr+n);
        result=FindTheSingleOne(arr,n);
        cout<<"The single element is :"<<result;

}
return 0;
}

