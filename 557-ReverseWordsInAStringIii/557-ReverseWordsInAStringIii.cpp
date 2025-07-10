// Last updated: 7/11/2025, 12:07:42 AM
class Solution {
public:
    void revWord(string& s, int size, int start){
        int i = start;
        int j = size + start - 1;
        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    string reverseWords(string s) {
        int count=1;
        int start=0;
        int i=0;
        while(i < s.size()){
            i++;
            count++;
            if(s[i] == ' ' || i == s.size()){
                revWord(s, count-1, start);
                start = i+1;
                count=0;
            }
        }
        return s;
    }
};