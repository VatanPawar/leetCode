// Last updated: 7/11/2025, 12:07:40 AM
class Solution {
public:
    int distributeCandies(vector<int>& arr) {
        set<int>st;
        for(auto it:arr){
            st.insert(it);
        }
        return min(st.size(),arr.size()/2);
    }
};