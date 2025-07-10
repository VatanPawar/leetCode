// Last updated: 7/11/2025, 12:07:19 AM
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        // Step 1: Count frequency of each word
        for (auto& word : words) {
            mp[word]++;
        }

        // Step 2: Max-heap to store pairs (frequency, word)
        priority_queue<pair<int, string>> pq;

        // Step 3: Insert all word-frequency pairs into the max-heap
        for (auto& entry : mp) {
            pq.push({entry.second, entry.first});
        }

        // Step 4: Collect the top k frequent words
        vector<string> ans;
        while (k > 0 && !pq.empty()) {
            vector<string> temp;

            // Get the current frequency of the top element in the heap
            int freq = pq.top().first;

            // Extract all words with the same frequency
            while (!pq.empty() && pq.top().first == freq && k > 0) {
                temp.push_back(pq.top().second);
                pq.pop();
            }

            // Sort the words lexicographically for words with the same frequency
            sort(temp.begin(), temp.end());
            for(auto it:temp){
                cout<<it<<" ";
            }
            cout<<endl;
            // Add the words to the result, decrement k each time
            for (int i = 0; i < min(k, (int)temp.size()); i++) {
                ans.push_back(temp[i]);
                 // Decrease k after adding an element
                if(ans.size()>=k){
                    return ans;
                }
            }

        }

        return ans;
    }
};
