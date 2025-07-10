// Last updated: 7/11/2025, 12:05:07 AM
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>hash;
        for(auto it:arr){
            hash[it]++;
        }
        for(auto it:arr){
            if(it==0 || it==1){
                if(hash[it]>1){
                    return 1;
                    break;
                }
            }
            else if(hash[2*it]>0){
                return 1;
                break;
            }
        }
        return 0;
    }
};