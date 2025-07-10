// Last updated: 7/11/2025, 12:07:10 AM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& s) {
        stack<int> st; // Stack to simulate collisions
        vector<int> ans; // Result vector

        for (int i = 0; i < s.size(); i++) {
            if (s[i] > 0) {
                // Push positive asteroid to the stack
                st.push(s[i]);
            } else {
                // Handle collisions with negative asteroid
                while (!st.empty() && st.top() > 0 && st.top() < abs(s[i])) {
                    st.pop(); // Pop smaller positive asteroids
                }

                if (!st.empty() && st.top() > 0 && st.top() == abs(s[i])) {
                    st.pop(); // Equal size, both explode
                } else if (st.empty() || st.top() < 0) {
                    // If no collision, add the negative asteroid
                    st.push(s[i]);
                }
            }
        }

        // Transfer stack elements to the result vector
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
