#include<iostream>
 using namespace std;



 unsigned int fact(unsigned int num )
 {
     if(num==0) return 1;
     else {

        return num*fact(num-1);
 }}


 int main()
 {

    unsigned int num,res;
     cin>>num;
     res=fact(num);
     cout<<res;
     return 0;
 }
