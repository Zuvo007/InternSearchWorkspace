class Solution { 
public:
    int lengthOfLongestSubstring(string s) {
        
        
       //doing STIRNG MANIPULATION 
        //Using ASCII CODES for less consumption of the time
        //having a supportive vector for the standard  ASCII Values 
        //initialize those with 0 
       vector<int> supporting_array(128,0);
        
        int left=0,right=-1,max_count=0;
        
        //condtion checking
	    while(++right<s.length())
            
            //sliding window technique using two pointers
            //checking the element is already traversed or not
	        if(supporting_array[s[right]]++ && (max_count=max(max_count,right-left)))
                
                //checking for the repitation
	            while(supporting_array[s[right]]>1) supporting_array[s[left++]]--;
        
        //setting the maximum count or length of the string
	    max_count=max(max_count,right-left);
        return max_count;
          
    }
};
