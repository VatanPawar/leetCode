// Last updated: 7/11/2025, 12:05:34 AM
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& arr) {
        int m=arr[0].size();
        int n=arr.size();
        for(int j=0;j<arr[0].size();j++){
            vector<int>temp;
            int k=j;
            int i=0;
            while(k<m && i<n){
                temp.push_back(arr[i++][k++]);
            }
            sort(temp.begin(),temp.end());
            int p=0;
            i=0;
            k=j;
            while(k<m && i<n){
                arr[i++][k++]=temp[p++];
            }
            
        }
        for(int i=1;i<n;i++){
               vector<int>temp;
            int k=i;
            int j=0;
            while(k<n && j<m){
                temp.push_back(arr[k++][j++]);
            }
            sort(temp.begin(),temp.end());
            int p=0;
            k=i;j=0;
            while(k<n && j<m){
                arr[k++][j++]=temp[p++];
            }
        }
        return arr;
    }
};