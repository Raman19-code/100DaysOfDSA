class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest=INT_MIN;
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(largest<nums[i]){
            largest=nums[i];
            ans=i;
        }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i!=ans && largest<2*nums[i])
            {
                return -1;
            }
        }
        return ans;
    }
};