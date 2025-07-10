// Last updated: 7/11/2025, 12:10:29 AM
class Solution {
public:
vector<int>t;
int solve(int n,string &s){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(s[n-1]=='0'){
        return 0;
    }
    if(t[n]!=-1){
        return t[n];
    }


    int inc1=solve(n-1,s);

   if(n>1){
    string temp="";
    temp=temp+s[n-1]+s[n-2];
    if(stoi(temp)>0 && stoi(temp)<27){
        int inc2=solve(n-2,s);
        return t[n]=(inc1+inc2);
    }
    }

    return t[n]=inc1;
   
  
}
    int numDecodings(string s) {
        int n=s.size();
        t=vector<int>(n+1,-1);
        cout<<n;
        reverse(s.begin(),s.end());
        return solve(n,s);
    }
};