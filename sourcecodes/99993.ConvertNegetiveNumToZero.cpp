#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//using a function which takes arguments as a vector
// and a start index of the vector
//return a vector to the caller

vector<int> ConvNeg(vector<int> array,int StartIdx)
{
    //base case
    
    if(StartIdx==array.size())
        return array;
        
        //over writing the -ve values
        //with zero
        
    if(array[StartIdx]<0)
        array[StartIdx]=0;
        
        //recursive case
        
    return ConvNeg(array,StartIdx+1);


}
int main()
{
    vector<int> NumArr={1,-2, 3, 4, -5};
    vector<int> ResArr;
    //calling the function ConvNeg
    //traversing the array to get the output
    ResArr=ConvNeg(NumArr,0);
    for(int i=0;i<ResArr.size();i++)
        cout<<ResArr[i]<<" ";
    return 0;
}
