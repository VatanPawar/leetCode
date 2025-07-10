// Last updated: 7/11/2025, 12:10:46 AM
class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        cout<<ans<<endl;
        while(i>=0&&j>=0){
            int x=a[i]-'0';
            int y=b[j]-'0';
            int t=(carry+x+y)%2;
            carry=(x+y+carry)/2;
            ans+=(t+'0');
            i--;j--;
        }
        cout<<ans<<endl;
        while(i>=0){
            int x=a[i]-'0';
            // int y=b[j]-'0';
            int t=(carry+x)%2;
            carry=(x+carry)/2;
            ans+=(t+'0');
            i--;
        }
        cout<<ans<<endl;
         while(j>=0){
            // int x=a[i]-'0';
            int y=b[j]-'0';
            int t=(carry+y)%2;
            carry=(y+carry)/2;
            ans+=(t+'0');
            j--;
        }
        cout<<ans<<endl;
        if(carry==1){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
       

        return ans;
    }
};