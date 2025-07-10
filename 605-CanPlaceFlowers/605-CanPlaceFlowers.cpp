// Last updated: 7/11/2025, 12:07:36 AM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
   
        if(arr.size()==1){
            return (arr[0]==0&&n<=1) || (n==0);
        }
       if(arr[0]==0 && arr[1]==0){
                // count++;
                arr[0]=1;
                // cout<<"1st"<<endl;
                n--;
            }
        
        for(int i=1;i<arr.size()-1;i++){
           
            
            if(arr[i-1]==0&&arr[i]==0&&arr[i+1]==0){
                // count++;
                arr[i]=1;
                //  cout<<"2nd"<<endl;
                n--;
            }
            
        }
        if(arr[arr.size()-1]==0&&arr[arr.size()-2]==0){
            n--;
        }
       
        // for(auto it:arr){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // cout<<n;
        return n<=0;
    }
};