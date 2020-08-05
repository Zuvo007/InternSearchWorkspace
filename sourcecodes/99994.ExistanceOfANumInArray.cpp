#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//using a function which takes arguments as a vector
// and a start index of the vector
// and the number 
// to check whether is it exist or not
//return a boolean value to the caller

bool CheckExistance(vector<int> array,int StartIdx,int num)
{
    //base case
    
    if(StartIdx==array.size())
        return false;
        
        //if the number given by the user 
        //got match with the array 
        // returning the value as true

        if(array[StartIdx]==num)
            return true;
            
    //making recursive call
    return CheckExistance(array,StartIdx+1,num);


}
int main()
{
    vector<int> NumArr={1,-2, 3, 4, -5};
    int num;
    cin>>num;
    
    //calling the function CheckExistance
    //if it returns true
    //number exist
    
    if(CheckExistance(NumArr,0,num))
        cout<<"exist";
        
        //else number will not exist
    else
    cout<<"not exist";
    return 0;

}
