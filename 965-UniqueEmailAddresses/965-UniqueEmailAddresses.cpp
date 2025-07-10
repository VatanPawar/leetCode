// Last updated: 7/11/2025, 12:06:18 AM
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int>mp;
        for(auto it:emails){
            bool flag=false;
            stack<char>st;
            bool plus=false;
            for(auto ch:it){
                if(plus==true && ch!='@' && flag==false){
                    continue;
                }
                 else if(ch=='@' && flag==false){
                    flag=true;
                    st.push(ch);
                     plus=false;
                }
                else if(ch=='+'){
                        
                    plus=true;
                }
               
                else if(flag==false){
                    if(ch!='.'){
                        st.push(ch);
                    }
                    
                    
                }
                else{
                    st.push(ch);
                }
            }
            
            string temp="";
            while(!st.empty()){
                temp+=st.top();st.pop();
            }
            reverse(temp.begin(),temp.end());
            cout<<temp<<endl;
            mp[temp]++;
        }
        return mp.size();
    }
};