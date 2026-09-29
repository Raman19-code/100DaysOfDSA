class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for(int k = 0; k < nums.size() - 2; k++) {

            // Skip duplicate first elements
            if(k > 0 && nums[k] == nums[k-1])
                continue;

            int temp = nums[k];
            int i = k + 1;
            int j = nums.size() - 1;

            while(i < j) {

                int sum = nums[i] + nums[j];

                if(sum > -temp)
                    j--;

                else if(sum < -temp)
                    i++;

                else {
                    ans.push_back({temp, nums[i], nums[j]});

                    // Skip duplicates
                    while(i < j && nums[i] == nums[i+1])
                        i++;

                    while(i < j && nums[j] == nums[j-1])
                        j--;

                    i++;
                    j--;
                }
            }
        }

        return ans;
    }
};