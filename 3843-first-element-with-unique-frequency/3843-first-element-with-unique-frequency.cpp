class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        unordered_map<int,int>mp1;
       for(auto it:mp)
       {
        mp1[it.second]++;
       }
       for(int x : nums) {
            if(mp1[mp[x]] == 1) {
                return x;
            }
       }
            return -1;

        
    }
};