// Last updated: 7/11/2025, 12:03:19 AM
class Solution {
public:

void check(int &x,int &y,vector<vector<int>> a ,int t){
    int i=x;//2
    int j=y;//1
    x=y=-1;
    int n=a.size();
    int f=0;
    if(i-2>=0&&j-1>=0){
            if(a[i-2][j-1]==t){
            
            x=i-2;
            y=j-1;
            return; }
    }
    if(i-2>=0&&j+1<n){
     
        if(a[i-2][j+1]==t){
             
            x=i-2;
            y=j+1;
            return;
        }
    }//-----------------
    if(i+1<n&&j-2>=0){f++;
        if(a[i+1][j-2]==t){
            
            x=i+1;
            y=j-2;
            return;
        }
    }
    if(i-1>=0&&j-2>=0){
      
        if(a[i-1][j-2]==t){
           
            x=i-1;
            y=j-2;
            return;
        }
    }//-------------------
    if(i+1<n&&j+2<n){
      
        if(a[i+1][j+2]==t){
           
            x=i+1;
            y=j+2;
            return;
        }
    }
    if(i-1>=0&&j+2<n){
      
        if(a[i-1][j+2]==t){
            
            x=i-1;
            y=j+2;
            return;
        }
    }////-----------
   if(i+2<n&&j-1>=0){
      
        if(a[i+2][j-1]==t){
           
            x=i+2;
            y=j-1;
            return;
        }
    }
    if(i+2<n&&j+1<n){
      
        if(a[i+2][j+1]==t){
            x=i+2;
            y=j+1;
            return;
        }
    }
    // else{
    //     x=i;y=i;
    // }
    return;
}
bool solve(int &x,int &y,vector<vector<int>> a ,int i){
   
    int n=a.size();
    if(i>=n*n){return true;}
    check(x,y,a,i);
    if(x==-1||y==-1){
        return false;
    }
    else{
        return solve(x,y,a,i+1);
    }
    
}
    bool checkValidGrid(vector<vector<int>>& grid) {
         int x,y;
        x=0,y=0;
if(grid[0][0]!=0){
    return false;
}  
return solve(x,y,grid,1);
}};