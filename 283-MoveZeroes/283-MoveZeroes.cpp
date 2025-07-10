// Last updated: 7/11/2025, 12:09:02 AM
class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j= 0;
        int n =a.size();
        vector<int> b(n,0);
        for(int i = 0 ; i< n ; i++){
            if(a[i]!=0){
                b[j]=a[i];
                j++;
            }
        }

        

        for(int i = 0 ; i<n;i++){
            a[i]=b[i];
        }

        







    }
};