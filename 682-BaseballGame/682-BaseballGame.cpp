// Last updated: 7/11/2025, 12:07:20 AM
class Solution {
public:
    int stringToInt(string s) {
        int num = 0;
        int sign = 1;
        int i = 0;

        // Handle negative numbers
        if (s[0] == '-') {
            sign = -1;
            i = 1;
        }

        for (; i < s.size(); i++) {
            num = num * 10 + (s[i] - '0');
        }

        return num * sign;
    }

    int calPoints(vector<string>& s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i][0];
            if (ch == 'C') {  // Remove the last valid score
                if (!st.empty()) {
                    st.pop();
                }
            } else if (ch == 'D') {  // Double the last valid score
                if (!st.empty()) {
                    st.push(2 * st.top());
                }
            } else if (ch == '+') {  // Add the last two valid scores
                if (st.size() >= 2) {
                    int last = st.top();
                    st.pop();
                    int secondLast = st.top();
                    st.push(last);  // Restore the last score
                    st.push(last + secondLast);  // Push the sum
                }
            } else {  // Push a new score onto the stack
                int temp = stringToInt(s[i]);
                st.push(temp);
            }
        }

        // Calculate the sum of all scores in the stack
        int totalScore = 0;
        while (!st.empty()) {
            totalScore += st.top();
            st.pop();
        }

        return totalScore;
    }
};
