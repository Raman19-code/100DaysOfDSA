class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mini)
            {
                mini=nums[i];
            }
        }
        int moves=0;
        for(int i=0;i<nums.size();i++)
        {
            moves+=abs(mini-nums[i]);
        }
        return moves;
    }
};