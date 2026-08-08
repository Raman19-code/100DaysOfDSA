class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>final;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int ans=INT_MIN;
        for(auto it:mp)
        {
            if(it.second>1)
            {
                ans=it.first;
                final.push_back(ans);
            }
        }
        return final;
        
    }
};