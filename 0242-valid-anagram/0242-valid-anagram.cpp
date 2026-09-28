class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        int char1[26]={0};
        for(int i=0;i<s.size();i++)
        {
            char1[s[i]-'a']++;
        }
         for(int i=0;i<t.size();i++)
        {
            char1[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(char1[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};