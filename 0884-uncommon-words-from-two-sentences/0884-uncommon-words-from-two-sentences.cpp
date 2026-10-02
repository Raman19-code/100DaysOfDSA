class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;

        string word = "";

        for(char ch : s1 + " " + s2) {
            if(ch == ' ') {
                mp[word]++;
                word = "";
            }
            else {
                word += ch;
            }
        }

        // Add the last word
        mp[word]++;

        for(auto it : mp) {
            if(it.second == 1) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};