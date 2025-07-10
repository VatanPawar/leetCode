// Last updated: 7/11/2025, 12:06:26 AM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
       int i=0;int j=a.size()-1;
       while(i<j){
         if(a[i]%2>a[j]%2){
            swap(a[i],a[j]);
            
        }
       if(a[i]%2==0){
            i++;
        }
       if(a[j]%2==1){
            j--;
        }
       
       }
       cout<<"i is : "<<i<<endl;
    //    reverse(a.begin(),a.begin()+i);
       return a;
}};
