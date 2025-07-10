// Last updated: 7/11/2025, 12:01:44 AM
class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr(10,0);
        while(n>0){
            arr[n%10]++;
            n/=10;
        }
        for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
        int temp1=0;
        int temp2=0;
        for(int i=9;i>=0;i--){
            if(arr[i]>1&&temp1==0){
                return i*i;
            }
            if(arr[i]>0&&temp1==0){
                temp1=i;
            }
            else if(arr[i]>0&&temp2==0){
                temp2=i;
            }
        }
        cout<<temp1<<" "<<temp2;
        return temp1*temp2;
    }
};