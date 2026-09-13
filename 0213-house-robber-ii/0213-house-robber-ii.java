
class Solution {
    public int rob(int[] nums) {
        int n = nums.length;

        // Agar sirf ek house hai
        if (n == 1)
            return nums[0];

        // Case 1: First house se second-last house tak
        int a = 0;
        int b = 0;

        for (int i = 0; i < n - 1; i++) {

            // Current house rob karo ya skip karo
            int curr = Math.max(b, a + nums[i]);

            // Values update karo
            a = b;
            b = curr;
        }

        int first = b;

        // Case 2: Second house se last house tak
        a = 0;
        b = 0;

        for (int i = 1; i < n; i++) {

            // Current house rob karo ya skip karo
            int curr = Math.max(b, a + nums[i]);

            // Values update karo
            a = b;
            b = curr;
        }

        int second = b;

        // Dono cases mein se maximum answer
        return Math.max(first, second);
    }
}