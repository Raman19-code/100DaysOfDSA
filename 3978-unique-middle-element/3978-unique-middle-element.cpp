class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int middEl=n/2;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[middEl]]==1)
            return true;
        }
        return false;
        
    }
};