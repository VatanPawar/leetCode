// Last updated: 7/11/2025, 12:04:20 AM
class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int min=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            if(tasks[i][0]<min){
                min=tasks[i][0];
            }
        }
        for(auto &it:tasks){
            cout<<it[0]<<" is changed to ";
            it[0]-=min;
            cout<<it[0]<<endl;
        }
        int t=0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;     // e , p ,index -> e,index,p
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq2;   //p,e,index   ->p,index,e
        vector<int>ans;
        for(int i=0;i<tasks.size();i++){
            pq.push({tasks[i][0],{i,tasks[i][1]}});
        }
        auto it = pq.top();pq.pop();

        pq2.push({it.second.second,{it.second.first,it.first}});

        while(!pq.empty()){
            while(!pq.empty()&&pq.top().first<=t){
                auto it =pq.top();pq.pop();
                    pq2.push({it.second.second,{it.second.first,it.first}});
            }
            if(!pq2.empty()){
                auto it = pq2.top();pq2.pop();
                ans.push_back(it.second.first);
                int temp=it.first;
                cout<<" processing time is  "<<temp<<endl;
                t+=temp;
            }
            else{
                t++;
            }
        }
        while(!pq2.empty()){
              auto it = pq2.top();pq2.pop();
                ans.push_back(it.second.first);
        }
        // cout<<it.first<<endl;
        return ans;
    }
};