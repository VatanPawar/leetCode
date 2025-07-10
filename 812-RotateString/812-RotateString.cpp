// Last updated: 7/11/2025, 12:06:50 AM
class Solution {
public:
    bool check(string s,string given,int idx){
        int x=s.size();
        int n=x;
        bool flag=1;
        int i=0;
        cout<<idx<<endl;
        while(i<x){
            if(s[(idx+i)%n]==given[i]){
                i++;
            }
            else{
                cout<<"breaking at "<<s[(idx+i)%x]<<" "<<given[i]<<endl;
                flag=0;
                break;
            }
            i++;
        }
        cout<<"flag : "<<flag<<endl;
        return flag;
    }
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return 0;
        }
        if(s.size()==0){
            return 1;
        }
        bool flag=0;;
        char start=goal[0];
        for(int i=0;i<s.size();i++){
            if(s[i]==start){
                flag=(check(s,goal,i)|| flag);
            }
        }
        return flag;
    }
};