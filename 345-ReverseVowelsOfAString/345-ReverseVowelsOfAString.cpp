// Last updated: 7/11/2025, 12:08:43 AM
class Solution {
public:
bool checkVowel(char ch){
   ch = tolower(ch);
    if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ){
        return 1;
    }
    return 0;
}
    string reverseVowels(string s) {
        int n=s.length();
        if(n==0||n==1){
            return s;
        }
        int i=0;int j=n-1;
        while(i<j){
            if(!checkVowel(s[i])){
                i++;
            }
            else if(!checkVowel(s[j])){
                j--;
            }
            else{
                char temp = s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;j--;
            }


        }
        return s;
    }
};