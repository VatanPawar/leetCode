// Last updated: 7/11/2025, 12:06:14 AM
class Solution {
public:
    vector<int> mergeAlternate(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int i = 0, j = 0;
        
        while (i < a.size() && j < b.size()) {
            ans.push_back(a[i]);
            ans.push_back(b[j]);
            i++;
            j++;
        }
        
        while (i < a.size()) {
            ans.push_back(a[i]);
            i++;
        }
        
        while (j < b.size()) {
            ans.push_back(b[j]);
            j++;
        }
        
        return ans;
    }

    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end()); // Sort the deck in increasing order
        deque<int> dq;

        for (int i = deck.size() - 1; i >= 0; i--) {
            if (!dq.empty()) {
                dq.push_front(dq.back()); // Move last element to front
                dq.pop_back();
            }
            dq.push_front(deck[i]); // Insert current element at the front
        }

        return vector<int>(dq.begin(), dq.end()); // Convert deque to vector and return
    }
};
