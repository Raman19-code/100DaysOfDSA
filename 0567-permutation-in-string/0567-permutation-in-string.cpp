class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1Freq[26] = {};
        int windowFreq[26] = {};

        int m = s1.size();
        int n = s2.size();

        if (m > n)
            return false;

        // Frequency of pattern
        for (char ch : s1) {
            s1Freq[ch - 'a']++;
        }

        // First window
        for (int i = 0; i < m; i++) {
            windowFreq[s2[i] - 'a']++;
        }

        // Check first window
        if (memcmp(s1Freq, windowFreq, sizeof(s1Freq)) == 0)
            return true;

        // Slide the window
        for (int i = m; i < n; i++) {

            // Remove left character
            windowFreq[s2[i - m] - 'a']--;

            // Add new right character
            windowFreq[s2[i] - 'a']++;

            // Check current window
            if (memcmp(s1Freq, windowFreq, sizeof(s1Freq)) == 0)
                return true;
        }

        return false;
    }
};