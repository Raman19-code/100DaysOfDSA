class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size(), k = p.size();
        if (n < k) return ans;

        int freqP[26] = {};
        int freqWindow[26] = {};

        for (int i = 0; i < k; i++)
        {
            freqP[p[i] - 'a']++;
            freqWindow[s[i] - 'a']++;
        }

        if (equal(begin(freqP), end(freqP), begin(freqWindow)))
        {
            ans.push_back(0);
        }

        for (int i = k; i < n; i++)
        {
            freqWindow[s[i] - 'a']++;          // add incoming char
            freqWindow[s[i - k] - 'a']--;      // remove outgoing char

            if (equal(begin(freqP), end(freqP), begin(freqWindow)))
            {
                ans.push_back(i - k + 1);
            }
        }
        return ans;
    }
};