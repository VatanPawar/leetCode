// Last updated: 7/11/2025, 12:04:25 AM
class Solution {
public:
    string mergeAlternately(string x, string y) {
        int i=0;
        int j=0;
        string ans="";
        while(i<x.length() && j< y.length()){
           
            ans+=x[i];
            i++;
            
            ans+=y[j];
            j++;

            // flag=!flag;
        }
        while(i<x.length()){
            ans+=x[i];i++;
        }
        while(j<y.size()){
            ans+=y[j];
            j++;
        }
        return ans;
    }
};