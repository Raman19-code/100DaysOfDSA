class Solution {
public:
    vector<int> evenOddBit(int n) {
        int count1=0;
        int count2=0;
        vector<int>ans;
        int i=0;
            while(n>0 )
            {
            if(i%2==0 && n&1==1)
            {
                count1++;
            }
           else  if(i%2!=0 && n&1==1)
            {
                count2++;
            }
             n=n>>1;
             i++;
            }
        ans.push_back(count1);
        ans.push_back(count2);
        
        return ans;

        
    }
};