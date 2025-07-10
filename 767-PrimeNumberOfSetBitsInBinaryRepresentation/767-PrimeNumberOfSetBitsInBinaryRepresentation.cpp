// Last updated: 7/11/2025, 12:07:03 AM
class Solution {
public:
bool isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2 ;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++){
            int b=__builtin_popcount(i);
           if(b==2||b==3||b==5||b==7||b==11||b==13||b==17||b==19||b==23||b==29||b==31){
            c++;
           }
        }
        return c;
    }
};