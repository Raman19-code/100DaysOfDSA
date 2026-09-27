class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int prefix=0;
        int count=0;
        int maxLen=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            prefix--;
            else
            {
                prefix++;
            }
            if(mp.find(prefix)!=mp.end())
            {
                maxLen=max(maxLen,i-mp[prefix]);
            }
            else{
            mp[prefix]=i;
            }
        }
        return maxLen;
        
    }
};