class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>result;
        deque<int>dq;
        for(int i=0;i<n;i++)
        {
            // mape space for nums[i]
            while(!dq.empty()&& dq.front()<=i-k)
            {
                dq.pop_front();
            }
            // remove smallest elements 
            while(!dq.empty()&&nums[i]>nums[dq.back()] )
            {
                dq.pop_back();
            }
            // now push i in deque for nums[i]
            dq.push_back(i);
            if(i>=k-1)
            {
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
        
    }
};