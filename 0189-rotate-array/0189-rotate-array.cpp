class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 0) return;

        k = k % n;

        // Reverse first n-k elements
        reverse(nums.begin(), nums.begin() + (n - k));

        // Reverse last k elements
        reverse(nums.begin() + (n - k), nums.end());

        // Reverse whole array
        reverse(nums.begin(), nums.end());
    }
};