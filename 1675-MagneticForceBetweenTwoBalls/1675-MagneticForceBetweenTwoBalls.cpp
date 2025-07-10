// Last updated: 7/11/2025, 12:04:44 AM
class Solution {
public:

bool check(int mid,vector<int>arr,int m){
    int count=1;
    int lasPos=arr[0];
    int sum=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]-lasPos>=mid){
            count++;
            lasPos=arr[i];
            if(count==m){
                return 1;
            }
        }
    }
    return 0;
    
}
    int maxDistance(vector<int>& position, int m) {
        //similar to the aggresive cows problems
        if(position.size()==0){
            return 0;
        }
        sort(position.begin(),position.end());
        int start=0;
        int end= position[position.size()-1] - position[0];
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(check(mid,position,m)){
                res=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return res;
    }
};