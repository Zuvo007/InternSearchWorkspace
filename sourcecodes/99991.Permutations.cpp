class Solution {
public:
    
    //this is my helper function for the permutation
    
  vector<vector<int>> permutation(vector<int> &nums,vector<int> currSet,vector<bool> &visited,vector<vector<int>> &res)
    {
         //having an empty vector currSet for the contribution.
        // each currSet is consisting three elements like [1,2,3],[3,2,1] etc.
       //so according to this condition when I get my currSet filling with three elements.
      // I am contributing this to a 2D vector named res and return that res.
        
        if(currSet.size()==nums.size())
        {
            res.push_back(currSet);
            return res;
        }
        
        //recursive step
      //iterating through the all elements for getting  the "SUB SEQUENCE"  
      
        for(int i=0;i<nums.size();i++)
        {
            if(!visited[i])
            {
                
                
                //having a boolean vector which helps to find the subsequence by marking that element 
                //visited and not considering it for the sub sequence.
                
                
                visited[i]=true;
                
                //considering that element as the first element of the permuation
                //this is my current contribution
                
                currSet.push_back(nums[i]);
                
                //this is my recurrence relation
                
                permutation(nums,currSet,visited,res);
                
                //after getting the first perutation 
                //reset all the things
                //prepare for the next permutation 
                
                visited[i]=false;
                currSet.pop_back();
                
            }
        }
      
      return res;
      
        }
        
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        vector<int> currSet;
        vector<bool> visited(nums.size(),false);
        vector<vector<int>> res;
        
        res=permutation(nums,currSet,visited,res);
        return res; 
    }
};



