// Last updated: 7/11/2025, 12:06:40 AM
class Solution {
public:
    bool buddyStrings(string s, string goal) {
                unordered_map<char,int>check;

        if (s==goal ){
            for(auto it:s){
                check[it]++;
                if(check[it]>1){
                    return 1;
                }
            }
            return 0;
        }
        if(s.size()!=goal.size()){
            return 0;
        }
        unordered_map<char,int>mpS;
                unordered_map<char,int>mpG;

        for(auto it:s){
            mpS[it]++;
        }
        for(auto it:goal){
            mpG[it]++;
        }
        for(auto it:mpS){
            cout<<it.first<<" "<<it.second<<" || mpG-> "<<mpG[it.first]<<" "<<endl;;
            if(mpG[it.first]!=it.second){
                return 0;
            }
        }
        
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                count++;
            }
        }
        return count==2;
        return 1;
        
    }
};