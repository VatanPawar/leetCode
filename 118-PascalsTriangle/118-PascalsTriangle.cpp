// Last updated: 7/11/2025, 12:10:14 AM
class Solution {
public:
    vector<vector<int>> generate(int x) {

        vector<vector<int>> b(x);
        if(x==1){
            b={{1}};
        }
        else if(x==2){
            b={{1},{1,1}};
        }

        else{
            
            
            
            for(int i=0;i<x;i++){
                b[i].resize(i + 1); 
                b[i][0]=1;
                b[i][i]=1;
                
                for(int j=1;j<i;j++){
                    int prevj=j-1;
                    int nxtj = j+1 ;
                    int previ = i-1;
                    b[i][j]=b[previ][prevj]+b[previ][j];
                }
            }
        }

        return b;
    }
};