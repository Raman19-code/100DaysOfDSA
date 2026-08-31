class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[non_zero],nums[i]);
                non_zero++;
            }
        }
        
    }
};