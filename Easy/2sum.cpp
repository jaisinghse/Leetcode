class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>sol ;
        map<int ,int>m ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int num = target - nums[i];
            
            if(m.find(num) != m.end())
            {
                sol.push_back(m[num]);
                sol.push_back(i);
            }
            m[nums[i]] = i;
        }
        
        return sol;
        
    }
};