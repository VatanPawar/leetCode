// Last updated: 7/11/2025, 12:06:48 AM
class Solution {
public:
    vector<int> shortestToChar(string a, char c) {
        
        int n=a.size();
        // vector<int>ans(n,INT_MAX);
        vector<int>ans1(n,INT_MAX);
        vector<int>ans2(n,INT_MAX);
        int start=-1;
        for(int i=0;i<n;i++){
            if(a[i]==c){
                ans1[i]=0;
                start=i;
            }
            else if (start!=-1){
                ans1[i] = i-start;
            }
        }
        start=-1;
        for(int i=n-1;i>=0;i--){
            if(a[i]==c){
                ans2[i]=0;
                start=i;
            }
            else if (start!=-1){
                ans2[i] = start-i;
            }
            ans1[i]=(min(ans1[i],ans2[i]));
        }
       
        return ans1;
    }
};