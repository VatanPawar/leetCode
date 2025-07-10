// Last updated: 7/11/2025, 12:06:01 AM
class Solution {
public:
bool check(int maxAllowed,int days,vector<int>arr){
    int sum=0;
    int da=1;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum>maxAllowed){
            da++;
            sum=arr[i];
        }

    }
    if(da<=days){       //mh - da==days
        return true;
    }
    return 0;
}
    int shipWithinDays(vector<int>& arr, int days) {
        if(arr.size()==1){
            return arr[0];
        }
        int sum=0;
        int maxi=arr[0];
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            sum+=arr[i];
        }

        int s=maxi;
        int e=sum;
        int res=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(check(mid,days,arr)){
                res=mid;
                e=mid-1;        //mistaken here -- mid=e-1
            }
            else{
                s=mid+1;        //mistaken here -- mid = s+1
            }
        }
        return res;
    }
};