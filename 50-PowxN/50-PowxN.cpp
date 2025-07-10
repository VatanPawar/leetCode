// Last updated: 7/11/2025, 12:10:55 AM
class Solution {
public:
     double pow(double x, long long n, double &product) {
        // Base case
        if (n == 0) {
            return product;
        }
        // If `n` is even, reduce the problem size by half
        if (n % 2 == 0) {
            return pow(x * x, n / 2, product);
        } 
        // If `n` is odd, adjust `product` and recurse
        product *= x;
        return pow(x, n - 1, product);
    }
    double myPow(double x, int n) {
       double p = 1;
       long long N=n;
       if(x==0||x==1){return x;} 
       else if(N>0){ return pow(x,N,p);}
       else{
        N=-1*N;return 1/pow(x,N,p);}
    }
   
};