class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp;
        for(int i=0;i<words1.size();i++)
        {
            mp[words1[i]]++;

        }
        unordered_map<string,int>mp1;
        for(int i=0;i<words2.size();i++)
        {
            mp1[words2[i]]++;
        }
        int cnt=0;
        for(auto it:mp)
        {
            string word=it.first;
            if(it.second==1 && mp1[word]==1)
            cnt++;

        }
        return cnt;
    }
};