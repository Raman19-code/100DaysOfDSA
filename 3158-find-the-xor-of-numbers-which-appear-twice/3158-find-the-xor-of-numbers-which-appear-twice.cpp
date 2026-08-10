class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int freq[51] = {0};
        int ans = 0;

        for (int x : nums) {
            freq[x]++;
        }

        for (int x : nums) {
            if (freq[x] == 2) {
                ans ^= x;
                freq[x] = 0;   // don't XOR it again
            }
        }

        return ans;
    }
};