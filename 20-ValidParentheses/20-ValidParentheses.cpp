// Last updated: 7/11/2025, 12:11:20 AM
class Solution {
public:
    
    bool isValid(string st) {
        stack <char> s;     //mistaken here
        for(int i=0;i<st.length();i++){
            char ch=st[i];

            //ch->ya to open ya close
            //open bracket -> push in stack
            //close -->check krta hu ki same type ka open hain ki nahi
            if(ch=='('||ch=='['||ch=='{'){
                s.push(ch);
            }
            else{
                //muzhe closed bracket mila hain
                //close bkt ke case main m
                //main stack ke top pr jaata hu and check krta hu 
                //ki muzhe same type ka open mila ya nahi
                if(ch==')' &&!s.empty()&&s.top()=='('){
                    s.pop();
                }
                else if(ch==']'  &&!s.empty()&&s.top()=='['){
                    s.pop();
                }
                 else if(ch=='}' &&!s.empty() &&s.top()=='{'){
                    s.pop();
                }
                else{
                   return false;
                }
            }
        }

        if(s.empty()){
            return 1;
        }
        return 0;
    }
};