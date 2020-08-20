class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int length=nums.size();
        if(length<3)
            return -1;
        sort(nums.begin(),nums.end());
        int closest_sum=nums[0]+nums[1]+nums[2];
        
        for(int i=0;i<length-2;i++)
        {
            int start=i+1;
            int end=length-1;
            while(start<end)
            {
                int TripletSum=nums[i]+nums[start]+nums[end];
                if(abs(target-TripletSum)<abs(target-closest_sum))
                    closest_sum=TripletSum;
            
                 if(TripletSum<target)
                    start++;
                 else 
                      end--;
            }
         }
        
    return closest_sum;
            
        }
        
    
};
