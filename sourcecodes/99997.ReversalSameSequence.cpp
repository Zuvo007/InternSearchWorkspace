#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool SameSequence(vector<int> a,int startIdx)
{
    //base case
    if(startIdx==a.size())
        return true;
        
        //conidtion for check the reverse sequences
    if(a[startIdx]==a[a.size()-startIdx-1])
    
    //recursive calls
        return SameSequence(a,startIdx+1);
    else return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int> numbers(n);
    cout<<"enter an array";
    for(int i=0;i<numbers.size();i++)
        cin>>numbers[i];


    if(SameSequence(numbers,0))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
