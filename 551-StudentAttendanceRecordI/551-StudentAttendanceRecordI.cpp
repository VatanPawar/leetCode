// Last updated: 7/11/2025, 12:07:44 AM
class Solution {
public:

//check late //check leate

bool nolate(string s){
    if(s.length()>2){
    for(int i=0;i<s.length()-2;i++){
        if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L'){return false;}
    }
    }
    return true;
    
}

bool noabsent(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){count++;}
    }
    if(count>=2){return false;}
    return true;
} 
    bool checkRecord(string s) {
       return nolate(s) && noabsent(s); 
    }
};