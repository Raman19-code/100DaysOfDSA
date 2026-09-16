class Solution {
    public int countDigits(int num) {
        int count=0;
        int tem=num;
        while(tem!=0)
        {
            int digit=tem%10;
            if(num%digit==0)
            {
                count++;
            }
            tem=tem/10;
        }
        return count;
        
    }
}