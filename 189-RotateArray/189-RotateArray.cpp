// Last updated: 7/11/2025, 12:09:40 AM
class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        if(n>1 && k!=0 && k<=n){
        int b[k];
        int c=0;
        for(int i = n-k ; i<n;i++){
            b[c]=a[i];
            c++;
        }

        for(int i=n-k-1;i>=0;i--){
            a[i+k]=a[i];
        }

        for(int i = 0 ; i<k ; i++){
            a[i]=b[i];
        }}

        if(n>1 && k!=0 && k>n){
        k=k%n;
          int b[k];
        int c=0;
        for(int i = n-k ; i<n;i++){
            b[c]=a[i];
            c++;
        }

        for(int i=n-k-1;i>=0;i--){
            a[i+k]=a[i];
        }

        for(int i = 0 ; i<k ; i++){
            a[i]=b[i];
        }  
        }
            
        
        

        }
    }
;