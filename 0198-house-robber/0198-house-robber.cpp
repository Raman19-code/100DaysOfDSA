class Solution {
public:
    int rob(vector<int>& nums) {
        int p1=0;
        int p2=0;
        for(int money:nums)
        {
            int rob=p2+money;
            int skip=p1;
            int curr=max(rob,skip);
            p2=p1;
            p1=curr;
        }
        return p1;
        
    }
};