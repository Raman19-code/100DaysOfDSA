class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one=0;
        int max1=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                one++;
            }
            else
            {
                one=0;
            }
                max1=max(one,max1);
        }
        return max1;
    }
};