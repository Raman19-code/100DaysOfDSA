class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int maxlen=0;
        while(lp<rp)
        {
            int ht=min(height[lp],height[rp]);
            int  wt=rp-lp;
            int area= wt*ht;
            maxlen=max(maxlen,area);
            if(height[lp]<height[rp])
            {
                lp++;
            }
            else
            {
                rp--;
            }
        }
        return maxlen;
        
    }
};