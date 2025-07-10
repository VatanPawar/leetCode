// Last updated: 7/11/2025, 12:10:32 AM
class Solution {
public:

void nextSmallerElement(vector<int>heights,vector<int>&nextAns){
    stack<int> st;
    st.push(-1);
    int n=heights.size();
    for(int i=n-1;i>=0;i--){
        int element=heights[i];
        while(st.top()!=-1 && heights[st.top()]>=element){
            st.pop();
        }
        
        nextAns.push_back(st.top());
        st.push(i);
    }
    reverse(nextAns.begin(),nextAns.end());
}

void prevSmallerElement(vector<int>heights,vector<int>&prevAns){
    stack<int> st;
    st.push(-1);
    int n=heights.size();
    for(int i=0;i<n;i++){
        int element=heights[i];
        while(st.top()!=-1 && heights[st.top()]>=element){
            st.pop();
        }
        
        prevAns.push_back(st.top());
        st.push(i);
    }
}


    int largestRectangleArea(vector<int>& heights) {
        vector<int>nextAns;
        vector<int>prevAns;
        nextSmallerElement(heights,nextAns);
        prevSmallerElement(heights,prevAns);
        vector<int>area; 
         int maxArea=0;
         for(int i=0;i<nextAns.size();i++){
            if(nextAns[i]==-1){
                nextAns[i]=nextAns.size();
            }
         }
        for(int i=0;i<nextAns.size();i++){
            int width=(nextAns[i]-prevAns[i]-1);
            int height=heights[i];
            int currArea=(width*height);
           maxArea=max(maxArea,currArea);
        }      
        return maxArea;       
    }
};