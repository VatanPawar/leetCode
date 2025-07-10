// Last updated: 7/11/2025, 12:08:39 AM
class Solution {
public:
void removeDuplicates(vector<int> &a) {
     
    int i=0;
    int j=1;
    int n=a.size();
    if(n==0||n==1){
        return ;
    }
    while(j<n){
        if(a[i]==a[j]){
            j++;
        }
        else if(a[i]!=a[j]){
            i++;
            a[i]=a[j];

        }
    }
    
    for(int k=i+1;k<n;k++){
        a.pop_back();
    }    
        
    }
vector<int> intersect(vector<int>& b, vector<int>& a) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        vector<int>ans;
        int m=a.size();int n=b.size();
        if(m<n){
            return intersect(a,b);
        }
        
        int j=0;
        for(int i=0;i<m && j<n;){
           if(a[i]==b[j]){
            ans.push_back(a[i]);j++;i++;
           }
           else if(a[i]>b[j]){
            j++;
           }
           else{
            i++;
           }
        }
        return ans;
    }
};