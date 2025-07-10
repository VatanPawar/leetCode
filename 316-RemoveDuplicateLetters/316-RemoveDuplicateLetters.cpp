// Last updated: 7/11/2025, 12:08:55 AM
class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans;
        vector<int>idx(26,-1);
        vector<int>visited(26,false);
        for(int i=0; i<size(s); i++) idx[s[i]-'a']=i;
        for(int i=0; i<size(s); i++){
            int cur=s[i]-'a';
            if(visited[cur]) continue;
            while(size(ans)>0 && ans.back()>s[i] && idx[ans.back()-'a']>i){
                visited[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans+=s[i];
            visited[cur]=true;
        }
        return ans;
    }
};