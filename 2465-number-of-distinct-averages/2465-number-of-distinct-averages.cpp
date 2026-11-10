class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        unordered_set<double>st;
        int end=nums.size()-1;
        while(start<end)
        {
            double avg=(nums[start]+nums[end])/2.0;
            st.insert(avg);
            start++;
            end--;
        }
        return st.size();
        
    }
};