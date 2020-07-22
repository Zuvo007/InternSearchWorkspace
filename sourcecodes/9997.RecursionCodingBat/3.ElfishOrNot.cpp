#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool CheckExists(string s,char p)
{
    //traversing all the characters
    //in a  string and searching
    // a particular character
    // in the string
    //if that found in the character
    // return true
    //else return false
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==p)
            return true;
    }
    return false;
}


bool CheckElfish(string s,int i)
{
    if(i==s.size())
    {
        //reaching the base condition it is
        //checking that three characters are in the
        //string or not
        // if present return true-->elfish
        //if not present return false --> not elfish
        if(CheckExists(s,'e')&&CheckExists(s,'l')&&CheckExists(s,'f'))
            return true;
        else
            return false;
    }

    //  recursive step to move further
        return CheckElfish(s,i+1);


}

// driver function
int main()
{
    string s;
    getline(cin,s);
    if(CheckElfish(s,0))
        cout<<"elfish";
    else
    cout<<"not elfish";
    return 0;
}
