// Last updated: 7/11/2025, 12:08:29 AM

class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;   // To store repeat counts
        stack<string> stringStack; // To store intermediate strings
        string currentString = "";
        int currentNumber = 0;

        for (char c : s) {
            if (isdigit(c)) {
                // Build the full number
                currentNumber = currentNumber * 10 + (c - '0');
            } else if (c == '[') {
                // Push the current number and string to stacks
                countStack.push(currentNumber);
                stringStack.push(currentString);

                // Reset for the next segment
                currentNumber = 0;
                currentString = "";
            } else if (c == ']') {
                // Pop from stacks and repeat the current string
                int repeatCount = countStack.top();
                countStack.pop();

                string temp = currentString;
                currentString = stringStack.top();
                stringStack.pop();

                // Append repeated string
                while (repeatCount--) {
                    currentString += temp;
                }
            } else {
                // Append character to current string
                currentString += c;
            }
        }

        return currentString;
    }
};
