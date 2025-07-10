// Last updated: 7/11/2025, 12:01:51 AM
class Solution {
public:
    bool isPrime(long long x){
        if(x<2){
            return 0;
        }
        if(x==2){
            return 1;
        }
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                return 0;
            }
        }
        return 1;
    }
    long long sumOfLargestPrimes(string s) {
        int n=s.size();
        priority_queue<long long>pq;
        set<long long>st;
        for(int i=n;i>=1;i--){
            for(int j=0;j<n;j++){
                long long temp=stoll(s.substr(j,i));
                if(isPrime(temp)){
                    st.insert(temp);
                }
            }
        }
        for(auto it:st){
            pq.push(it);
        }
        int k=3;
        long long sum=0;
        while(k-- && !pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};