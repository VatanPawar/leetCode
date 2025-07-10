// Last updated: 7/11/2025, 12:08:10 AM
class Solution {
public:
    string frequencySort(string str) {
        unordered_map<char, int> hash;
        priority_queue<pair<int, char>> pq;

        // Count frequency of each character
        for (char ch : str) {
            hash[ch]++;
        }

        // Push (frequency, character) into max-heap
        for (auto& it : hash) {
            pq.push({it.second, it.first});
        }

        // Build the result string
        string ans = "";
        while (!pq.empty()) {
            auto [freq, ch] = pq.top();
            pq.pop();
            ans += string(freq, ch);  // Append character `freq` times
        }

        return ans;
    }
};
