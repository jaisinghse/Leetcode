class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int m = 0;
        int l =0 ;
        int r = height.size()-1;
        
        while (l < r)
        {
            int diff = r-l;
            m = max(m , height[l] > height[r] ? height[r]*diff : height[l]*diff );
            
            if(height[l] < height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return m;
        
    }
};