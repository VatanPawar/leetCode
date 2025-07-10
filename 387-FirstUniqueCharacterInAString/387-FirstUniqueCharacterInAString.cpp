// Last updated: 7/11/2025, 12:08:33 AM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        queue<int>q;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            q.push(i);
            while(!q.empty()&&mpp[s[q.front()]]>1){
                q.pop();
            } 
        }
        if(q.empty()){return -1;}
        return q.front();
    }
};