// Last updated: 7/11/2025, 12:03:51 AM
class Solution {
public:
    typedef pair<char,int>p;
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<p>pq;
        vector<int>freq(26,0);

        for(auto x:s){
            freq[x - 'a']++;
        }

        for(int i=0;i<26;i++){
            if(freq[i] > 0){
                char ch = 'a' + i; 
                pq.push({ch,freq[i]});
            }
        }

        string ans = "";
        while(!pq.empty()){
            auto fr = pq.top();
            pq.pop();

            char ch = fr.first;
            int count = fr.second;

            for(int i=0;i<repeatLimit && count > 0;i++){
                ans += ch;
                count--;
            }

            if(count > 0 && pq.size() > 0){
                auto sc = pq.top();
                pq.pop();
                ans += sc.first;

                if(sc.second > 1){
                    pq.push({sc.first,sc.second - 1});
                }

                pq.push({ch,count});

            }
        }

        return ans;
    }
};