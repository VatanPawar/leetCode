// Last updated: 7/11/2025, 12:03:26 AM
class Solution {
public:
    int similarPairs(vector<string>& words) {
       vector<int>arr;
       for(auto x:words){
        int temp=0;
        for(auto it:x){
            int bit=it-'a'+1;
            temp|=(1<<bit);
        }
        arr.push_back(temp);
       } 
       unordered_map<int,int>mp; 
       int count=0;
       for(int i=arr.size()-1;i>=0;i--){
        if(mp[arr[i]]>0){
            count+=mp[arr[i]];
        }
        mp[arr[i]]++;
       }
       return count;
    }
};