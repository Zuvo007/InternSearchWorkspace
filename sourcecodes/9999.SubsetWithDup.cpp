class Solution {
public:
    void subsetsWithDupHelper(vector<int> &nums, int startIdx, vector<vector<int>> &res, vector<int> currSet){
        // Base case
        int n = nums.size();
        if(startIdx == n){
            res.push_back(currSet);
            return;
        }
        
        // Recursive step
        // Decision: Include it 0 or more times
        
        // Let's find out the first index which contains a different
        // element
        int i, j;
        i = startIdx+1;
        while(i < n && nums[i] == nums[i-1]) i++;
        
        j = i;
        
        // Include 0 times
        subsetsWithDupHelper(nums, j, res, currSet);
        
        // Include 1 or more times
        for(i = startIdx; i < j; i++){
            currSet.push_back(nums[i]);
            subsetsWithDupHelper(nums, j, res, currSet);
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> currSet;
        
        sort(nums.begin(), nums.end());
        
        subsetsWithDupHelper(nums, 0, res, currSet);
        
        return res;
    }
};
