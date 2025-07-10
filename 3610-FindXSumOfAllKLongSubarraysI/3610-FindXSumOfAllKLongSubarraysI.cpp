// Last updated: 7/11/2025, 12:02:01 AM
class Solution {
public:
int solve(int st,int e,vector<int>arr,int x){
    cout<<"Start, end  << "<<st<<" , "<<e<<endl;
    set<int>s;
    int sum=0;
    unordered_map<int,int>hash;
    priority_queue<pair<int,int>>pq;
    vector<int>t(e-st+1,0);
    int j=0;
    for(int i=st;i<=e;i++){
         if(hash[arr[i]]==0){
            t[j++]=arr[i];
        }
        s.insert(arr[i]);
        hash[arr[i]]++;
        sum+=arr[i];
   }
    if(s.size()<x){
        return sum;
    }
    
    int ans=0;
    int i=0;
    int x2=x;
    while(i<t.size()){
        int temp=t[i];i++;
        pair temp2={hash[temp],temp};
        // s.pop();
        pq.push(temp2);
        
    }
    while(x--){
        pair temp=pq.top();
        cout<<"most occured is : "<<temp.second<<" and its freq: "<<temp.first<<endl;
        pq.pop();
        ans+= temp.first*temp.second;
    }
    cout<<endl;
    return ans;
}
    vector<int> findXSum(vector<int>& arr, int k, int x) {
        vector<int>ans(arr.size()-k+1,-1);

      for(int i=0;i<arr.size()-k+1;i++){
        ans[i]=solve(i,i+k-1,arr,x);
      }

      return ans;

        
        
        
        }
};