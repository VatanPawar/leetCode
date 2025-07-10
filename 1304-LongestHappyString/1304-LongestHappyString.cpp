// Last updated: 7/11/2025, 12:05:28 AM
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;

        if (a > 0) pq.push({a, 'a'});
        if (b > 0) pq.push({b, 'b'});
        if (c > 0) pq.push({c, 'c'});

        string ans = "";

        while (pq.size() > 0) {
            pair<int, char> temp = pq.top();
            pq.pop();

            int f = temp.first;
            char ch = temp.second;

            // check if last 2 characters are same as current character
            if (ans.size() >= 2 && ans.back() == ch && ans[ans.size() - 2] == ch) {
                // try to use the next best character
                if (pq.empty()) break; // no other option

                pair<int, char> nTemp = pq.top();
                pq.pop();

                int nf = nTemp.first;
                char nch = nTemp.second;

                ans += nch;
                nf--;

                if (nf > 0) pq.push({nf, nch});
                pq.push({f, ch}); // push back original character
                continue;
            }

            // safe to use current character
            ans += ch;
            f--;

            if (f > 0) pq.push({f, ch});
        }

        return ans;
    }
};
