// Last updated: 7/11/2025, 12:05:21 AM
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& arr, string word) {
        int size=word.length();
        vector<vector<string>> ans;
        string search="";
        priority_queue<string>pq;
        sort(arr.begin(),arr.end());
        for(auto it:word){
            search+=it;
            vector<string>temp;
            int j=1;
            for(int i=0;i<arr.size() &j<=3;i++){
                if(arr[i].substr(0,search.size())==search){
                   temp.push_back(arr[i]);; j++;
                }
               
              
            }
            


            //
            ans.push_back(temp);
        }
        return ans;
    }
};