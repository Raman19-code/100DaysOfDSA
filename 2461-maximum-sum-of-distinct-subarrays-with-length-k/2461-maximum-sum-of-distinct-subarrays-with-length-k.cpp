
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        long long sum = 0;
        long long maxSum = 0;

        unordered_map<int, int> mp;

        for (int right = 0; right < n; right++) {
            sum += nums[right];
            mp[nums[right]]++;

            if (right - left + 1 > k) {
                sum -= nums[left];
                mp[nums[left]]--;

                if (mp[nums[left]] == 0) {
                    mp.erase(nums[left]);
                }

                left++;
            }

            if (right - left + 1 == k && mp.size() == k) {
                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }
};
