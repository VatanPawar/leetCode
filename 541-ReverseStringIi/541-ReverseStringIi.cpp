// Last updated: 7/11/2025, 12:07:48 AM
class Solution {
public:
   void reverse(string &str,int s,int e){
        while(s<e){
            char ch=str[s];
            str[s]=str[e];
            str[e]=ch;
            // delete ch;
            s++;e--;

        }
    }
    string reverseStr(string s, int &k) {

        if(s.size()<k){
            k=s.size();
        }
        for(int i=0;i<s.size();){
            if(i%k==0 && i<s.size()){
                // cout<<"if called at k="<<k<<"and i = "<<i<<endl;
                if(i+k-1<s.size()){
                reverse(s,i,i+k-1);}
                else{
                    reverse(s,i,s.size()-1);
                }
                i=i+2*k;
            }
            else{
                //  cout<<"else called at k="<<k<<endl;
                i++;
            }
            cout<<endl;

        }
        return s;
    }
};