class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        if(x<0)
        {
            return false;
        }
        long long  ans=0;
        while(x!=0)
        {
            int digit=x%10;
            if(ans<INT_MIN || ans>INT_MAX)
            {
                return false;
            }
            ans=ans*10+digit;
            x=x/10;
        }
        return ans==temp;
        
    }
};