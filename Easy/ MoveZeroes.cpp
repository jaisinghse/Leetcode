class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int position = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != 0)
            {
                nums[position] = nums[i];
                position++;
            }
            
        }
        for(int i = position ; i < nums.size() ; i++)
        {
            nums[i] = 0;
        }
    }
};