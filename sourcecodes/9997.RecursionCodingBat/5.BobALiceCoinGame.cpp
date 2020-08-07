#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//function to decide who is winner
bool CoinGame(int n,int x,int y,int i,bool array[])
{

    //base case
    if(i>n)

        return array[n];

    //considering the first
    //if there is no coin
    //A will loose the game
    if(i==0)
    {
        array[i]=false;
        return CoinGame(n,x,y,i+1,array);
    }

    //if there is one coin
    //A will pick that
    //win the game.
    if(i==1)
    {

        array[i]=true;
        return CoinGame(n,x,y,i+1,array);
    }

        //this is those cases where coins will more than
        //2

        //if A looses i-1 th case or
        //i-x th case
        // i-y th case
        //then A will surely win
        // i th case
        if(i-1>=0 && !array[i-1])
            array[i]=true;
        else if(i-x>=0 && !array[i-x])
            array[i]=true;
        else if(i-y>=0 && !array[i-y])
            array[i]=true;
        else
            array[i]=false;

            //recursive calls
        return CoinGame(n,x,y,i+1,array);

}


int main()
{

    int choice1,choice2,i=0,n;
    cout<<"enter the number of coins: ";
    cin>>n;
    cout<<"enter the choices :";
    cin>>choice1>>choice2;
    bool a[n+1];
    if(CoinGame(n,choice1,choice2,i,a))
        cout<<"Alice";
    else
        cout<<"Bob";
    return 0;

}
