class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int majorIndex = 0;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == nums[majorIndex])
            {
                count++;
            }
            
            else
            {
                count--;
                if(count == 0)
                {
                    majorIndex = i;
                    count = 1;
                }
            }
        }
        
        return nums[majorIndex];
    }
};