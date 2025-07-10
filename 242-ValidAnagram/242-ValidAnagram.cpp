// Last updated: 7/11/2025, 12:09:07 AM
const auto _ = std::cin.tie(nullptr)->sync_with_stdio(false);

class Solution {
public:
    bool isAnagram(string &s, string &t) {
        for(char c : s){
            auto result = t.find(c);
            if(result != std::string::npos){
                t.erase(result,1);
            }
            else{return false;}
        }
        if(t.empty()){
            return true;
        }
        return false;
    }
};