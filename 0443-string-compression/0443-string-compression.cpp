class Solution {
public:
    int compress(vector<char>& chars) {
        int ind=0;
        int n=chars.size();
        for(int i=0;i<n;i++)
        {
            char curr=chars[i];
            int count=0;
            while(i<n&& chars[i]==curr)
            {
                count++;
                i++;
            }
            if(count==1)
            {
                chars[ind++]=curr;
            }
            if(count>1)
            {
                chars[ind++]=curr;
                string str=to_string(count);
                for(int x:str)
                {
                    chars[ind++]=x;
                }
            }
            i--;
        }
         chars.resize(ind);
         return ind;
        
    }
};