class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> lastSeen;
        int ans = INT_MAX;

        for (int right = 0; right < cards.size(); right++) {
            int card = cards[right];

            if (lastSeen.find(card) != lastSeen.end()) {
                int left = lastSeen[card];
                ans = min(ans, right - left + 1);
            }

            lastSeen[card] = right;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};