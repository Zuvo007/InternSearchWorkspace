#include<iostream>
#include<algorithm>
using namespace std;

int  a[100000];

int IsCowPlaced(int mid,int stall_num,int cow_num);
int BinarySearch(int stall_num,int cow_num);

int main()
{

    int t,stall_num,cow_num,res; //t->testcases,stall_num->number of stalls,cow_num->number of cows;
    cin>>t;
    while(t--)
    {
        cin>>stall_num>>cow_num;
        for(int i=0;i<stall_num;i++) // not the entire array size is used as to trim the search-space
                                    //so only stall_num is used everywhere in the code
        {
            cin>>a[i];
        }
        sort(a,a+stall_num);
        res=BinarySearch(stall_num,cow_num);

    }
    cout<<res;

}

//doing BinarySearch on the TTTFFFF of the T*F* predicated framework;
//T-> placed the given number of cows in the search-space successfully;
//F->placing of given cows is not possible in the defined search-space;

int BinarySearch(int stall_num,int cow_num)
{
    int lo=1;
    int hi=a[stall_num-1]-a[0];
    int mid;
    while(hi-lo>1)
    {
        mid=lo+(hi-lo)/2;

        if(IsCowPlaced(mid,stall_num,cow_num)==true)
            lo=mid;
               //I can place cow here and this can be my answer and will try for more optimize answer
               //like--> f(2) we have the positions 1,4,8 as all differences >2
               //like-->f(3) we also have the positions 1,4,8 as all the differences >3
               //but for the optimization we should need a sanity check (example: TT condition)
        else

            //here I can't place the cow so going for the another half of my search_space
            hi=mid-1;

    }

        //sanity check conidition

    if(IsCowPlaced(hi,stall_num,cow_num))
        return hi;
    else if(IsCowPlaced(lo,stall_num,cow_num))
        return  lo;



}



//this is my conidtion check for the placing of cows

int IsCowPlaced(int mid,int stall_num,int cow_num)
{
    int cow_count=1;
    int pos=a[0];
    for(int i =1;i<stall_num;i++)
    {
        if(a[i]-pos>=mid)
        {
            cow_count++;
            pos=a[i];  //updating the position of the previous cow_count
        }
    }


    if(cow_count>=cow_num)
        return true;
        else
           return false;

}











