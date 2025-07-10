// Last updated: 7/11/2025, 12:05:39 AM
class Solution {
public:
vector<int>t=vector<int>(40,-1);
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        if(n==1||n==2){
            return 1;
        }
        if(t[n]!=-1){
            return t[n];
        }
        return t[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};