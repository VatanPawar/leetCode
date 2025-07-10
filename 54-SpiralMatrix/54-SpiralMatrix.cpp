// Last updated: 7/11/2025, 12:10:53 AM
class Solution {
public:
    void tr(vector<vector<int>>& a,vector<int>& b,int i){
        int end1=a[0].size()-1;

        int end2=a.size()-1;
        for(int loop=i ; loop<=end1-i;loop++){
            b.push_back(a[i][loop]);
        }//done
        for(int loop=i+1 ; loop<=end2-i;loop++){
            b.push_back(a[loop][end1-i]);
        }//done
        for(int loop=end1-i-1; loop>=i;loop--){
            b.push_back(a[end2-i][loop]);
        }
        for(int loop=end2-i-1 ; loop>i;loop--){
            b.push_back(a[loop][i]);
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> b;
        int m = a.size();
        int n = a[0].size();
        
        if(m==n){
        for(int i  = 0 ; i<=(m/2) ;i++){
            tr(a,b,i);
        }
        }

        else if (n>m && n!=1 && m!=1){
            for(int i  = 0 ; i<(m/2) ;i++){
            tr(a,b,i);
        }

        int temp=m/2;
        if(m%2!=0)
        {
        for(int j = temp; j<=n-(temp)-1;j++){
             b.push_back(a[temp][j]);
        }}


        }
        else if (n<m && n!=1 && m!=1){

            int x = n;
            n=m;
            m=x;
            for(int i  = 0 ; i<(m/2) ;i++){
            tr(a,b,i);
        }

        int temp=m/2;
        if(m%2!=0)
        {
        for(int j = temp; j<=n-(temp)-1;j++){
             b.push_back(a[j][temp]);
        }}


        }

        else if(n==1 && m!=1){
            for(int i=0;i<m;i++){
                b.push_back(a[i][0]);
            }
        }
        else if(m==1 && n!=1){
            for(int i=0;i<n;i++){
                b.push_back(a[0][i]);
            }
        }
        else if(n==1 && m==1){
            
                b.push_back(a[0][0]);
            
        }
        
        
        
        
        
        return b;
        }
        

    
};