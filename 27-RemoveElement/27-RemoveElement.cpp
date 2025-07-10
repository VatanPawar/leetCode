// Last updated: 7/11/2025, 12:11:12 AM
class Solution {
public:

void solveRemove(vector<int> &a,int start,int end){
    int temp = end-start+1;
    if(start ==-1 && end ==-1){
        return;
    }
    //cout<<"start, end,temp is  "<<start<<" "<<end<<" "<<temp<<" "<<endl;
    int n=a.size();
   if(end==n-1){
    while(end!=start){
        a.pop_back();
        end--;
    }
   }
    end++;
    int i;
    
    for(i= start ; end<n;end++){
        a[i]=a[end];
        i++;
    }
    i++;
    while(i<n){
        a.pop_back();
        i++;
    }
    if(temp<a.size() && a.size()>0){
        a.pop_back();
    }
    
}
    int removeElement(vector<int>&a, int val) {
         if(a.size()==0){
        return 0;
    }
        sort(a.begin(),a.end());
        int start=-1;
        int end=-1;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]==val && start ==-1){
                start=i;
                
            }
            if(a[i]==val){
                end=i;
            }
        }
        
        solveRemove(a,start,end);
        
       
        
        n=a.size();
        if(a[n-1]==val){
            a.pop_back();n--;
        }
        return a.size();

    }
};