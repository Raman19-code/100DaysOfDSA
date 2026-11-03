class Solution {
public:
    int minMoves(vector<int>& nums) {
        int largest=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>largest)
            {
                largest=nums[i];
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=abs(largest-nums[i]);
        }
        return ans;
        
    }
};