// Last updated: 7/11/2025, 12:04:54 AM
class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        int i=0;
        int j=0;
        int count=0;
        while(j<s.size()){
            if(j-i+1<k){
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                    count++;
                }
                j++;
            }


            if(j-i+1==k){
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                    count++;
                }
                ans=max(ans,count);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    count--;
                }
                i++;j++;
            }
        }
        return ans;
    }
};