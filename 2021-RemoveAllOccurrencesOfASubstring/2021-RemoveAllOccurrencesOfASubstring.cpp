// Last updated: 7/11/2025, 12:04:14 AM
class Solution {
public:
void stringRemove(string &givenA , string rPart,int &x){
    // cout<<"stringRemove function "<<"here int i = "<<x<<endl;
    
    string ans="";
    for(int i=0;i<x;i++){
         ans.push_back( givenA[i] );
    }
    for(int i=x+rPart.size();i<givenA.size();i++){
        ans.push_back( givenA[i] );
    }
    givenA=ans;
    // x=x-1;
    // cout<<"modified string >>" << givenA<<endl;
    // cout<<endl;
}
bool check(string givenA,string rPart,int i2){
    //  cout<<"check function "<<"here int i = "<<i2<<endl;
    if(i2>=givenA.size()){
        return false;
    }
    int i=i2;
    int n2=rPart.size();
    for(int j=0;j<rPart.size();j++){
        if(givenA[i]!=rPart[j] || i>givenA.size()){
            return false;
        }
        else{
            i++;
        }
    }
    return true;
}

// void removeAll(string &givenA,string rPart,int i){
//     cout<<endl;
//     cout<<"______removeAll function for i = "<<i<<endl;
//     if(i>=givenA.size()){return;}//i+1
//     if(check(givenA,rPart,i) ){
//         stringRemove(givenA,rPart,i);
//     }
    
//     if(check(givenA,rPart,i+1) ){i=i+1;
//         stringRemove(givenA,rPart,i);
//     }
    
//     else{
//         i=i+1;
//     }
    
    
//     removeAll(givenA,rPart,i);
// }
void removeAll2(string &givenA,string rPart,int i){
    for(int i= 0; i<givenA.size();i++){
        if(check(givenA,rPart,i)){
            //remove
            stringRemove(givenA,rPart,i);
            //recursive part
            removeAll2(givenA,rPart,0);
        }
        
    }
}
    string removeOccurrences(string s, string part) {
        removeAll2(s,part,0);
        return s;
    }
};