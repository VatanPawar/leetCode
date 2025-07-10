// Last updated: 7/11/2025, 12:08:28 AM
class Solution {
public:
    void solve(vector<int>time,vector<string>&ans,int c,int hr,int min,int i){
        if(c==0){
            if(hr<=11 && min<=59){
                string hrs="";
                hrs=to_string(hr);
                string mins="";

                mins=to_string(min);
                if(mins.size()==1){
                    mins='0'+mins;
                }
                ans.push_back(hrs+":"+mins);
            }
            return ;
        }
        if(i>=time.size()){
            return;
        }
        //inc
        if(i<=3){
            solve(time,ans,c-1,hr+time[i],min,i+1);
        }
        else{
            solve(time,ans,c-1,hr,min+time[i],i+1);
        }
        //exc
        solve(time,ans,c,hr,min,i+1);

    }
    vector<string> readBinaryWatch(int c) {
        vector<int>time={8,4,2,1,32,16,8,4,2,1};
        vector<string>ans;
        solve(time,ans,c,0,0,0);
        return ans;

    }
};