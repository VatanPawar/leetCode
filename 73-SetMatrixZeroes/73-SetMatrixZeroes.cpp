// Last updated: 7/11/2025, 12:10:40 AM
class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        unordered_set <int> im;
        unordered_set <int> jm;
        int m=a.size();
        int n = a[0].size();
        for(int i = 0;i<m;i++){for(int j=0;j<n;j++){
            if(a[i][j] == 0){
                im.insert(i);
                jm.insert(j);
            }
        }}

        for(auto it=im.begin();it!=im.end();it++){
            for(int j=0;j<n;j++){
                a[*it][j]=0;
            }
        }

        for(auto it=jm.begin();it!=jm.end();it++){
            for(int i=0;i<m;i++){
                a[i][*it]=0;
            }
        }
    }
};