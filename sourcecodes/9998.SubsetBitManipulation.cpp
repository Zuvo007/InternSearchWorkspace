#include<iostream>
using namespace  std;


void possibleSubsets( int a[100], int n )
{
for(int i=0;i<=(1<<n);i++)
{
for(int j = 0 ; j < n ;j++ )
if( i & ( 1 << j ))
cout<<a[j]<<" ";
cout<<endl;
}}

int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    possibleSubsets(a,n);
}
