// Last updated: 7/11/2025, 12:11:11 AM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        int i = 0;  
        while(i < haystack.length()){
            if(haystack[i] == needle[0]){
                for(int j = 0; j < needle.length(); j++){
                    if(haystack[i+j] != needle[j])
                        break;

                    if(j == needle.length()-1)
                        ans = i;
                }
            }
            if(ans != -1)
                break;

            i++;
        }

        return ans;
    }
};