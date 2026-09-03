class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minVal = *min_element(nums1.begin(), nums1.end());

        int minOdd = INT_MAX;

        // Find smallest odd number
        for (int x : nums1) {
            if (x % 2 != 0) {
                minOdd = min(minOdd, x);
            }
        }

        for (int x : nums1) {

            // Already has required parity
            if (x % 2 == minVal % 2)
                continue;

            // x has different parity.
            // We need a smaller odd number.
            if (minOdd >= x)
                return false;
        }

        return true;
    }
};