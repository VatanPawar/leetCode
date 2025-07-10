// Last updated: 7/11/2025, 12:09:52 AM
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n = s.size();
        int start=0;
        int end=0;
        for(int i = 0 ; i<n;i++){
            //skip the leading space
            while(i<n && s[i]==' '){
                i++;
            }
            if(i==n){break;}//out of bound check
            

            //copy characters to the right position
            while(i<n && s[i]!=' '){
                s[end++]=s[i++];
            }

            //after copy reverse the individual word
            reverse(s.begin()+start , s.begin()+end);

            //add ectrea space between the word
            s[end++]=' ';
            start=end;

             
        }
        s.resize(end-1);
        return s;
    }
};