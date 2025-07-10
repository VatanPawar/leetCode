// Last updated: 7/11/2025, 12:10:31 AM
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int x=(m+n)-a.size();
        int i=m-1;
        while(x--){
            a.push_back(-1);
        }
        int k=a.size()-1;
        int j=n-1;
        while(i>=0&&j>=0){
            if(a[i]>=b[j]){
                a[k]=a[i];i--;k--;
            }
            else{
                 a[k]=b[j];j--;k--;
            }
        }
        while(i>=0&&k>=0){
            a[k]=a[i];i--;k--;
        }
        while(j>=0&&k>=0){
            a[k]=b[j];j--;k--;
        }
        // return a;
    }
};