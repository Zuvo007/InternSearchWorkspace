#include<iostream>
using namespace std;




bool KthSetBit(int n,int k)
{
    if((n&(1<<(k-1)))!=0)            //it basically verifies that 5 th bit of 27 is a set bit
        return true;
    else
        return false;
}



int LeftMostBit(int n)
                                        //for 27                       //pos-> 8 7 6 5 4 3 2 1
{                                       // as it is the position of MSB i.e:   0 0 0 1 1 0 1 1
    int count =0;                        //it will return 5
    while(n>0)
    {
        count++;
        n=n>>1;
    }
    return count;
}


bool ElementIsPalindrom(int x)
{                                                     //1= return true
                                                      //3=return true
                                                      //5=return true
                                                      //7=return true
                                                      //9=return true
                                                      //15=return true
                                                      //17=return true
                                                      //21=return true
                                                      //27=return true

    int Msb_pos=LeftMostBit(x);                         //other than these all will return false
                                                        //till the  9th of user input number**********
    int Lsb_pos=1;
    while(Msb_pos>Lsb_pos)
    {
        if(KthSetBit(x,Msb_pos)!=KthSetBit(x,Lsb_pos))          // as the 5 th bit  of 27 is set  it is comparing with the right most
            return false ;                                         //bit of 27 and if they are unequal then return false

        Msb_pos--;
        Lsb_pos++;
    }
    return true;      // the bool function return true  always at the end
}




int FindNthPalindrom(int x) //here my x=9
 {
     int count_palindrom=0;
     int i;
     for(i=1;i<=2147483647;i++) // run a loop from i=1 to largest number and check whether it is palindrom or not
     {                              //if palindrom then increasing the count to match with required nth number
         if(ElementIsPalindrom(i))
             count_palindrom++;

             // the bool function return true  always at the end
             // it increases count



                                  // checking for---->  1=1
                                                      //2=3
                                                      //3=5
                                                      //4=7
                                                      //5=9
                                                      //6=15
                                                      //7=17
                                                      //8=21
                                                      //9=27



     if(count_palindrom==x)               //for all these palindrome numbers my count =9 which is equal to the given input
                                        //by the user so the loop will break

        break;

 }
 return i;                           //it will return 27

 }





int main()

{
    int num;
    cout<<"enter an integer :";
    cin>>num;
    if(num==0) return -1;
    int res=FindNthPalindrom(num);// calling the function with value eg:9
    cout<<res<<endl;

    return 0;
}
