// Last updated: 7/11/2025, 12:08:01 AM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>temp=nums;
        for(int i=0;i<nums.size()-1;i++){
            temp.push_back(nums[i]);
        }
        vector<int>greater(temp.size());
        stack<int>st;
        for(int i=temp.size()-1;i>=0;i--){
            while(!st.empty()&&st.top()<=temp[i]){
                st.pop();
            }
            if(st.empty()){
                greater[i]=-1;
            }
            else{
                greater[i]=st.top();
            }
            st.push(temp[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(greater[i]);
        }
        return ans;
    }
};