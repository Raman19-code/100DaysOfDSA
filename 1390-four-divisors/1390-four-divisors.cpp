class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int cnt=0;
            int sum=0;
            int temp=nums[i];
            for(int j=1;j*j<=temp;j++)
            {
                if(temp%j==0)
                {
                    int other=temp/j;
                if(other==j)
                {
                    cnt+=1;
                    sum+=j;
                }
                else
                {
                    cnt+=2;
                    sum+=j+other;

                }
                }
            }
             if(cnt==4)
            {
                ans+=sum;
            }
            
        }
        return ans;
        
    }
};