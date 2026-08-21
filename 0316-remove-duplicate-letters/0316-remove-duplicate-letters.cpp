class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector<int> count(26, 0);
        vector<bool> visited(26, false);

        for(char c : s) {
            count[c - 'a']++;
        }

        stack<char> st;

        for(char c : s) {

            count[c - 'a']--;

            // Already present in stack
            if(visited[c - 'a'])
                continue;

            // Remove bigger characters if they appear later
            while(!st.empty() &&
                  st.top() > c &&
                  count[st.top() - 'a'] > 0) {

                visited[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(c);
            visited[c - 'a'] = true;
        }

        string ans = "";

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};