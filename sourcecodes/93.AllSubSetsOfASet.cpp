#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> f(vector<int>&nums,int startIdx)
{
    //base case
    //solution to the smallest subproblem
    if(startIdx==nums.size())
     return {{}};

       //recursive approach
       //recurrence relation
       //approach is    f(nums,0)={(f(nums,1)U nums[0])U f(nums,1)}



    vector<vector<int>> subSol=f(nums,startIdx+1);
    vector<vector<int>> res;

    //1.Exclude the current element
   // f(nums,1)

   res=subSol;

   //for the (f(nums,1)U nums[0]) I am iterating through all the elements
   //and append nums[0] to the every set

   // Include the current element
   int i;
   vector<int> temp;
   for (i=0;i<subSol.size();i++)
   {
       temp=subSol[i];
       temp.push_back(nums[startIdx]);
        res.push_back(temp);
   }
   return res;



}


vector<vector<int> > subsets(vector<int>& nums)
{
	 return f(nums,0);
}



int main()
{

	vector<int> array = { 1, 2, 3,4 };
	vector<vector<int> > res = f(array,0);


	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}

	return 0;
}

