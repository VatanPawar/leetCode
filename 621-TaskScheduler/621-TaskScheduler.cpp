// Last updated: 7/11/2025, 12:07:33 AM
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        

        //pq -> freq,letter
        //if(pq.size()>n){ while(n--){ all freq -1 ;ans.p_b(all char)}}
        // //else { 
        //     int rem = n - pq.sie() + 1 
        //     while(pq.size()--){all freq -1 ; ans.p_b(character of the top element) }
        //     while(rem--){
        //         ans.p_b("idle")
        //     }
        // }
        // return ans.size();

        unordered_map<char,int>hash;
        for(auto it:tasks){
            hash[it]++;
        }
        vector<char>ans;
        priority_queue<pair<int,char>>pq;
        for(auto it:hash){
            pq.push({it.second,it.first});  //freq,number
        };n++;
        while(pq.size()>0){
                priority_queue<pair<int,char>>pq2;
            // auto [ch2,f2]=pq.top();pq.pop();
            int temp=n;
            if(pq.size()>=n){
                // cout<<"if condition implemented"<<endl;
                while(temp--){
                    auto [f1,ch1]=pq.top();pq.pop();
                    f1--;
                    ans.push_back(ch1);
                   
                    if(f1>0){
                    pq2.push({f1,ch1});}
                }
                while(!pq2.empty()){
                    pq.push(pq2.top());pq2.pop();
                }
            }

            else{
                //  cout<<"else condition implemented"<<endl;
                int rem=n-pq.size();
                int s=pq.size();
                // cout<<"rem,s is "<<rem<<" "<<s<<endl;
                
                while(s--){
                     auto [f1,ch1]=pq.top();pq.pop();
                    f1--;
                    ans.push_back(ch1);
                   if(f1>0){
                    pq2.push({f1,ch1});}
                }
                while(!pq2.empty()){
                    pq.push(pq2.top());pq2.pop();
                }
                while(rem-- ){
                    ans.push_back('i');
                }
            }
        }
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]=='i'){
                ans.pop_back();
            }
            else{
                break;
            }
        }
        // for(auto it:ans){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        
        return ans.size();


    }
};