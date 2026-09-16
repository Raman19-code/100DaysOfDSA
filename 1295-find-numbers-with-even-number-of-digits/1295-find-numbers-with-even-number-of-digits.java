class Solution {
    public int findNumbers(int[] nums) {
        int n=nums.length;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int temp=nums[i];
            int count=0;
            while(temp!=0)
            {
                int digit=temp%10;
                count++;
                temp=temp/10;
            }
            if(count%2==0)
            {
                ans++;
            }
        }
        return ans;
        
    }
}