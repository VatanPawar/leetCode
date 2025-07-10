// Last updated: 7/11/2025, 12:04:30 AM
class Solution {
public:
    bool check(vector<int>& nums) {
        stack<int> st; // Stack to process the array
        int n = nums.size();
        int count = 0; // To count rotation points

        // Push all elements into the stack
        for (int i = 0; i < n; i++) {
            st.push(nums[i]);
        }

        // Start from the top of the stack and process cyclically
        int prev = st.top(); // Initialize with the top of the stack
        st.pop();

        while (!st.empty()) {
            int curr = st.top();
            st.pop();

            // Check if there's a rotation point
            if (prev < curr) {
                count++;
            }

            // If more than one rotation point exists, return false
            if (count > 1) {
                return false;
            }

            prev = curr; // Update prev for the next comparison
        }

        // Final check for circular rotation point (last vs first element)
        if (prev < nums.back()) {
            count++;
        }

        return count <= 1;
    }
};
