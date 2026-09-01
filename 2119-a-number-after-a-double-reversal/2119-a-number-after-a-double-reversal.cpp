class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        long long ans=0;
        while(num!=0)
        {
            int digit=num%10;
            if(ans<INT_MIN || ans>INT_MAX)
        {
            return false;
        }
            ans=ans*10+digit;
            num=num/10;
        }
        long long final=0;
        while(ans!=0)
        {
            int digit=ans%10;
            if(final<INT_MIN || final>INT_MAX)
            {
                return false;
            }
            final=final*10+digit;
            ans=ans/10;
        }


        return  temp==final;
        
    }
};