class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=n;
        while(true)
        {
            int temp=ans;
            int prod=1;
            while(temp!=0)
            {
                int digit=temp%10;
                prod*=digit;
                temp=temp/10;
            }
            if(prod%t==0)
            break;
            
                ans++;
        }
        return ans;
        
    }
};