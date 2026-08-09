class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> mp;
        vector<int> ans;

        // store frequency of nums1
        for(int num : nums1)
        {
            mp[num]++;
        }

        // check nums2
        for(int num : nums2)
        {
            if(mp[num] > 0)
            {
                ans.push_back(num);
                mp[num]--;
            }
        }

        return ans;
    }
};