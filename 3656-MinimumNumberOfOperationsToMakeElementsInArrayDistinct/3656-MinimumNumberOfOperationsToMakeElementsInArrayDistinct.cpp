// Last updated: 7/11/2025, 12:01:58 AM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=-1;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]>1){
                // cout<<"hash of is "<<nums[i]<<" "<<freq[nums[i]]<<endl;
                freq[nums[i]]--;
                //   cout<<"hash of is "<<nums[i]<<" "<<freq[nums[i]]<<endl;
                count=i;
            }
        }
        // cout<<"count value is : "<<count <<endl;
        // if(count!=-1){
        //     return (count+2)/3;
        // }
        // else return 0;
        return count!=-1 ?  (count+1+2)/3: 0;
    }
};