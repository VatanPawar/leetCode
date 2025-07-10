// Last updated: 7/11/2025, 12:03:46 AM
class Solution {
public:
    int largestInteger(int num) {
        int temp=num;

        priority_queue<int,vector<int>,greater<int>>odd;
        priority_queue<int,vector<int>,greater<int>>even;

        while(temp>0){
            int t=temp%10;
            temp/=10;
            if(t%2==0){
                even.push(t);
            }
            else{
                odd.push(t);
            }

        }
        temp=num;
        int ans=0;
        string s="";
         while(temp>0){
            int t=temp%10;
            temp/=10;
            if(t%2==0){
                string a=to_string(even.top());
                even.pop();
                s=a+s;
            }
            else{
               string a=to_string(odd.top());
                odd.pop();
                s=a+s;
            }
                
            

        }
        return stoi(s);

    }
};