// Last updated: 7/11/2025, 12:08:30 AM
class Solution {
public:
    bool isSubsequence(string s, string t) {
      
        if(s.size()==0&&t.size()==0){return 1;}
        if(t.size()<s.size()){
            return 0;
        }
        
        int k=0;
        for(int i=0;i<t.size();i++){
            if(s[k]==t[i]){
                k++;
                
            }
            if(k>=s.size()){
                return 1;
            }
        }
        return 0;
    }
};