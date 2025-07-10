// Last updated: 7/11/2025, 12:02:03 AM
class Solution {
public:
    string solve(string word,int k){

        //bc
        if(word.length()>=k){
            return word;
        }
        string temp = word;
        for(int i=0;i<word.length();i++){
            if(word[i]=='z'){word[i]='a';}
            word[i]=word[i]+1;
        }
        return solve(temp+word,k);
    }
    char kthCharacter(int k) {
        string a = "a";
        a= solve(a,k);
        return a[k-1];
    }
};