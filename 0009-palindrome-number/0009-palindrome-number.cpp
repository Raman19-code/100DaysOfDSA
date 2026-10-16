class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        if(temp<0)
        {
            return false;
        }
        long long ans=0;
        while(temp!=0)
        {
            int digit=temp%10;
            ans=ans*10+digit;
            temp=temp/10;
        }
        return x==ans;
        
    }
};