// Last updated: 7/11/2025, 12:03:47 AM
class Solution {
public:
    int minBitFlips(int s, int g) {
        // int ans=0;
        // while(s>0 || g>0){
        //     if((s&1)==(g&1)){
        //         // cout<<s<<"->"<<(int)(s&1)<<"    "<<g<<" -> "<<(int)(g&1)<<endl;
        //     }
        //     else{
        //         // cout<<s<<"->"<<s&1<<"    "<<g<<" -> "<<g&1<<endl;
        //         ans++;
        //     }
        //     s=s>>1;
        //     g=g>>1;
        // }
        // return ans;

        return __builtin_popcount(s^g);
    }
};