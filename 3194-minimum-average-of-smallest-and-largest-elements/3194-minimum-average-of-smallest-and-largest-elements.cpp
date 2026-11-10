class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double minAverage=INT_MAX;
        int start=0;
        int end=nums.size()-1;
        while(start<end)
        {
            double avg=(nums[start]+nums[end])/2.0;
            if(avg<minAverage)
            {
                minAverage=avg;
            }
            start++;
            end--;
        }
        return minAverage;
        
    }
};