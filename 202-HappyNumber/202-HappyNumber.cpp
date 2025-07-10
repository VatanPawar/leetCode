// Last updated: 7/11/2025, 12:09:33 AM
class Solution {
public:
int findSquareSum(int n){
    int sum=0;
    while(n>0){
        sum = sum + pow(n%10,2);
        n=n/10;
    }
    return sum;
}
bool solve(int n){
    int temp=0;
    if(n==1 || n==7){
        return 1;
    }
    else if(n<=9){
        return 0;
    }
    else{
       temp = findSquareSum(n);
    }
    return solve(temp);
}
  
    bool isHappy(int n) {
        return solve(n);
    }
};