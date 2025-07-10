// Last updated: 7/11/2025, 12:04:11 AM
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        // if(s.size()%2==1){
        //     return 0;
        // }
        vector<int>a(26,0);
        for(auto it:s){
            a[it-'a']++;
        }
        int freq=-1;
        for(auto it:a){
            cout<<it<< " ";
            if(it==0){
                continue;
            }
            else if(it!=0 && freq==-1){
                freq=it;
            }
            else if(freq!=-1 && it!=freq){
                return 0;
            }
        }
        return 1;

    }
};