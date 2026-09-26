class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;

    mp[0] = 1;  // important

    int prefixSum = 0;
    int count = 0;

    for (int x : nums) {
        prefixSum += x;

        // Is there a previous prefix = prefixSum - k?
        if (mp.find(prefixSum - k) != mp.end()) {
            count += mp[prefixSum - k];
        }

        // Store current prefix
        mp[prefixSum]++;
    }

    return count;
}
};