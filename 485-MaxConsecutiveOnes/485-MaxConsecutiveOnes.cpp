// Last updated: 7/11/2025, 12:08:04 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n = a.size();
        int c=0;
        
        vector<int > b(n,0);
        for(int i=0;i<n;i++){
            if(a[i]==0){
                
                
                c++;
                
            }
            else{
            b[c]++;}
        }

        int temp=0;
        for(int i=0;i<n;i++){
            if(b[i]>temp){
                temp=b[i];
            }
        }

        return temp;

    }
};