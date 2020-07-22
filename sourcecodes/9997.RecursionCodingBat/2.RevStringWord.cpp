#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string GetReverse(string s,int start,int end)

{
          //base case the function will continue
          //up to end=s.size()-1;
          //cout<<s;
            if(end==s.size())
            {
                //this is for the last word of the string

                reverse(s.begin()+start,s.end());

                //to reverse the entire string

                reverse(s.begin(),s.end());
                return s;
            }

            //checking for a space
            //to separate each word in the string
            //when I am getting a space just reverse
            //all words before the space using two pointers
            //reversing all elements from start to end-1
            //then set the start again to the end+1 th pos
            // make recursive call as follows

            if(s[end]==' ')
            {
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;

                }

            //here I make recursive call
            //to traverse the string for further
            // when I didn't get any space
               return  GetReverse(s,start,end+1);



}

int main()
{
    string s,y;
    getline(cin,s);
    y=GetReverse(s,0,0);
    cout<<y;
    return 0;

}
