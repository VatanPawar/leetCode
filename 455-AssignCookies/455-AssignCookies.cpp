// Last updated: 7/11/2025, 12:08:09 AM
class Solution {
public:
    int findContentChildren(vector<int>& c , vector<int>& s) {
        sort(c.begin(),c.end());
        sort(s.begin(),s.end());
        
        int i=0;int j=0;
        while(i<c.size()&&j<s.size()){
            if(c[i]<=s[j]){
                i++;j++;
            }
            else{
                j++;
            }
        }
        return i;
        


    }
};