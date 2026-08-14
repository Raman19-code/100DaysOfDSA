class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int pfreq[256]={};
        int sfreq[256]={};
        int s1=s.size();
        int p1=p.size();
        if(p1>s1)
        {
            return {};
        }
        for(int i=0;i<p1;i++)
        {
            pfreq[p[i]-'a']++;
        }
        for(int i=0;i<p1;i++)
        {
            sfreq[s[i]-'a']++;
        }
        if(memcmp(pfreq,sfreq,sizeof(pfreq))==0)
        {
            ans.push_back(0);
        }
        for(int i=p1;i<s1;i++)
        {
            sfreq[s[i]-'a']++;
            sfreq[s[i-p1]-'a']--;
            if(memcmp(pfreq,sfreq,sizeof(pfreq))==0)
            {
                ans.push_back(i-p1+1);
            }
        }
        return ans;
        
    }
};