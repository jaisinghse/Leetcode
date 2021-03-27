class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = nums[0];
        int sumSofar = nums[0];
        
        for(int i = 1 ; i < nums.size() ; i++)
        {
            
            sumSofar = max(sumSofar+nums[i] , nums[i]);
            maxSum   = max(sumSofar , maxSum);
        }
        return maxSum;
        
    }
};