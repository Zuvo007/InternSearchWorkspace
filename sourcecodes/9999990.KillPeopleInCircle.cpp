#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int SafePos(int n,int k)
{
    
}







int main()
{
    int n=5;
    int k=3;
    int res=SafePos(n,k);
    cout<<res;
    return 0;
}


//recursive method



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SafePos(vector<int> &a,int k,int index)
{

    if(a.size()==1)
        return a[0];

    index=(index+k)%a.size();
    a.erase(a.begin()+index);
    return SafePos(a,k,index);

}


int main()
{
    int n=40;
    int k=7;
    vector<int> person(n);

     for(int i=0;i<person.size();i++)
        person[i]=i+1;
    int res=SafePos(person,k-1,0);
    cout<<res;
    return 0;
}
