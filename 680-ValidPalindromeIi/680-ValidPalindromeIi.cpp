// Last updated: 7/11/2025, 12:07:21 AM
class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;int j=s.size()-1;
        int flag=0;
        int flag1=1;
        int flag2=1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else if(s[i]!=s[j] &&flag==0){
                i++;
                flag=1;
            }
            else if(s[i]!=s[j]){
                flag1=0;
                break;
            }
            
        }
        i=0;j=s.size()-1;
        flag=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else if(s[i]!=s[j] &&flag==0){
                j--;
                flag=1;
            }
            else if(s[i]!=s[j]){
                flag2=0;
                break;
            }
            
        }
        return flag1 || flag2;
    }
};