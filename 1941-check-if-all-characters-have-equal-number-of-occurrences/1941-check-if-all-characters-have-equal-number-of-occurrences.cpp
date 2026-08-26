class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26]={0};
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        int first=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0)
            {
                continue;
            }
           if(first==0)
           {
            first=freq[i];
           }
           else if(freq[i]!=first)
           {
            return false;
           }
        }
        return true;
        
    }
};