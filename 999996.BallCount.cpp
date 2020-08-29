#include<bits/stdc++.h>
using namespace std;

int sum=0;
int count1=0;

int roundCount(vector<int> ballNo,int bagSize,int position)
{
    if(position==ballNo.size())
        return count1;

    sum=sum+ballNo[position];

    if(sum>bagSize)
    {
        sum=0;
        count1=count1+1;
        position=position-1;
    }

    if(sum==bagSize)
    {
        sum=0;
        count1=count1+1;
    }

    return roundCount(ballNo,bagSize,position+1);

}


int main()
{
    vector<int> noOfBalls {1,2,3,1,2,4,5,3,2};
    int bagsize=5;
    int result=roundCount(noOfBalls,bagsize,0);
    cout<<result;
}
