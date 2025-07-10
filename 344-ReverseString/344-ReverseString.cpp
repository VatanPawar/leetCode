// Last updated: 7/11/2025, 12:08:44 AM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;j--;
        }
    }
};