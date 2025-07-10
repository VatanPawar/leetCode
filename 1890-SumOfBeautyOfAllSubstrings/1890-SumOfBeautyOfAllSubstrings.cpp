// Last updated: 7/11/2025, 12:04:26 AM
class Solution {
public:
//find all substrings [nested loops]

 //chect function is beauty!= 0 -->  map 
   
    int beautySum(string s) {
     int beautySum = 0 ;
    unordered_map<char,int> mp;
    //find all substring   
        for(int i = 0 ;i<s.size();i++){
            mp.clear();
    //clear the map after the substrings of the first letters
            for(int j=i ;j<s.size();j++ ){
                char &ch = s[j]; 
                //char ch = s[j]
                //reference is better 
                 mp[ch]++;
                 
                 int mini = INT_MAX;

                 int maxi = INT_MIN;

                 for (auto it:mp){
                    maxi = max(maxi , it.second);
                    mini = min(mini ,it.second);
                 }

                 int beauty = maxi - mini ;
                 beautySum = beautySum + beauty ; 



            }
        }
        return beautySum;


    }
};