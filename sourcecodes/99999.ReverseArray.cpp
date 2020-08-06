#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> Reverse(vector<int> &a,int startidx,int endidx)
{
    if(startidx>=endidx)
    return a;

    swap(a[startidx],a[endidx]);
    return Reverse(a,startidx+1,endidx-1);


}

int main() {
    vector<int> nums = { 1,2,3,4,5};
    vector<int> res=Reverse(nums,0,nums.size()-1);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}


