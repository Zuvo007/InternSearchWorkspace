#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count1=0;
int CountNum(vector<int> a,int startIdx,int num)
{

    if(startIdx==a.size())
        return count1;
    if(a[startIdx]==num)
        count1++;
    return CountNum(a,startIdx+1,num);
}
int main()
{
    vector<int> num={1,2,3,2,4,2};
    int n;
    cin>>n;
    int res=CountNum(num,0,n);
    cout<<res;

}
