// Last updated: 7/11/2025, 12:05:18 AM
class Solution {
public:
int divide(int number,int divisor){
int a2=1;
if(number%divisor ==0){a2=number/divisor;}
else{a2=(number/divisor)+1;}
return a2;

}

int sumOfDividedArray(vector<int> arr,int k){
int n=arr.size();
int ans=0;
for(int i=0;i<n;i++){
    
    ans = ans +  divide(arr[i],k);
}
return ans;

}
    int smallestDivisor(vector<int>& a, int threshold) {
      int n=a.size();
      int low=1;
      int high=*max_element(a.begin(),a.end());
      int ans=-1;
    // if(sumOfDividedArray(a,high)==threshold){return high;}
      while(low<=high){
        int mid=(low+high)/2;
        if(sumOfDividedArray(a,mid)>threshold){low=mid+1;}
        else {high=mid-1;
        ans=mid;}

      }

        return ans;
    }
};