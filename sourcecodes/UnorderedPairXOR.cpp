#include<iostream>
 using namespace std;


 int CountPairs(int num)
 {
     int count=0,i,j;
     for(i=1;i<num;i++)
     {
         for(j=i+1;j<=num;j++)
            if((i^j)<=num) count++;
     }
     return count;
 }

 int main()
 {
     int number,res,t;
     cin>>t;
     while(t--){
     cin>>number;
     res=CountPairs(number);
     cout<<res<<endl;
     }
 }
