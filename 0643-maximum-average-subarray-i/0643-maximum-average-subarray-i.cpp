class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        double maxAverage=INT_MIN;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        maxAverage=max(double(sum)/k,maxAverage);
        for(int i=k;i<nums.size();i++)
        {
            sum+=nums[i]-nums[i-k];
            maxAverage=max(double(sum)/k,maxAverage);
        }
        return maxAverage;
        
    }
};