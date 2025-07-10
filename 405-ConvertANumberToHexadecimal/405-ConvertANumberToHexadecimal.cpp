// Last updated: 7/11/2025, 12:08:24 AM
class Solution {
public:

    string solve(int n){
        unsigned int m=(n);
        // for(int i=0;i<32;i++){
        //     m^=(1<<(i));
        // }
        m=~m;
        m+=1;
        cout<<m<<endl;
        string ans="";
        for(int i=0;i<32;i=i+4){
            int temp=0;
             for(int i=0;i<=3;i++){
                if((n&1)==1){
                    // cout<<"Seeting bit number "<<i<<" - ";
                    temp|=(1<<(i)); 
                    // cout<<temp<<endl;  //mistaken here
                }
                n=n>>1;             //mistaken here
            }
            if(temp<=9){
                ans+=to_string(temp);
            }
            else{
                ans+=(temp-10+'a');
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string toHex(int n) {
        if(n==0){
            return "0";
        }
        string ans="";
        if(n<0){
            return solve(n);
        }
        while(n>0){
            int temp=0;
            if(n<=8){
                ans+=to_string(n);
                break;
            }
           
            for(int i=0;i<=3;i++){
                if(n&1==1){
                    // cout<<"Seeting bit number "<<i<<" - ";
                    temp|=(1<<(i)); 
                    // cout<<temp<<endl;  //mistaken here
                }
                n=n>>1;             //mistaken here
            }
      
            // //  cout<<n<<endl;
            //  cout<<temp<<endl;
            if(temp<=9){
                ans+=to_string(temp);
            }
            else{
                ans+=(temp-10+'a');
            }
         
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};