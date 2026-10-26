class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int num=x;
        long long ans=0;
        while(num!=0)
        {
            int digit=num%10;
            ans=ans*10+digit;
            num=num/10;
        }
        return x==ans;
        
    }
};