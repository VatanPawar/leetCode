// Last updated: 7/11/2025, 12:01:36 AM
class Solution {
public:
    string generateTag(string s) {
        string ans="#";
        bool flag=0;
        bool first=0;
        for(int i=0;i<s.size()&&ans.size()<100;i++){
            char ch=s[i];
            if(ch==' '&&first==1){
                flag=true;
            }
            else if((ch>='a' && ch<='z')  || (ch>='A'&&ch<='Z')){
                if(flag){
                    ans+=toupper(ch);
                    flag=0;
                }
                else{
                    ans+=tolower(ch);
                    first=1;
                }
            }
        }
        return ans;
    }
};