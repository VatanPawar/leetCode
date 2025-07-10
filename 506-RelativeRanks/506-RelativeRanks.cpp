// Last updated: 7/11/2025, 12:08:00 AM
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++){
            pair temp={score[i],i};
            pq.push(temp);
        }
        vector<string>ans(score.size(),"");
        if(!pq.empty()){
        pair temp=pq.top();
        pq.pop();
        ans[temp.second]="Gold Medal";
        }
        if(!pq.empty()){
        pair temp=pq.top();
        pq.pop();
        ans[temp.second]="Silver Medal";
        }
        if(!pq.empty()){
        pair temp=pq.top();
        pq.pop();
        ans[temp.second]="Bronze Medal";
        }
        int x=3;
        while(!pq.empty()){
            x++;
        pair temp=pq.top();
        pq.pop();
        string s = to_string(x);
        ans[temp.second]=s;
        }
        return ans;

    }
};