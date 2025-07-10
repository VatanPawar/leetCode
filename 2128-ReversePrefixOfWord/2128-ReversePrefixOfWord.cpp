// Last updated: 7/11/2025, 12:04:06 AM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack <char> st;
        int temp=-1;
        for(int i=0;i<word.size();i++){
            st.push(word[i]);
            if(word[i]==ch){
                temp=i;
                break;
            }
        }
        if( temp!=-1){
            for(int i=0;i<=temp;i++){
            word[i]=st.top();
            st.pop();
        }
        }
        
    return word;
    }
};