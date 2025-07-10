// Last updated: 7/11/2025, 12:06:46 AM
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        int n=image.size();
       for(int i=0;i<n;i++){
           vector<int>temp;
           for(int j=n-1;j>=0;j--){
               if(image[i][j]==0){
               temp.push_back(1);
               }
               else{
                   temp.push_back(0);
               }
               // return temp;
           }
           ans.push_back(temp);
       }
        
        return ans;
    }
};