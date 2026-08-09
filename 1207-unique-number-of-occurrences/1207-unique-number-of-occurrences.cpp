class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        // Step 2: Store frequencies
        unordered_set<int> st;

        for (auto it : mp) {

            // Frequency already exists
            if (st.count(it.second)) {
                return false;
            }

            st.insert(it.second);
        }

        return true;
    }
};