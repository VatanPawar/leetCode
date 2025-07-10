// Last updated: 7/11/2025, 12:11:08 AM
class Solution {
public:
    void swap(int &a,int &b){
        int temp = a;
        a=b;
        b=temp;
    }

   void rev(vector<int> &a, int initial, int end) {
        // Reverse the elements in place without using an extra vector
        while (initial < end) {
            swap(a[initial], a[end]);
            initial++;
            end--;
        }
    }
    void nextPermutation(vector<int>& a) {
        int index=-1;
        int n =a.size();
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                index = i;
                break;
            }
        }
        if(index==-1){rev(a,0,n-1);}
        else{
                for(int i = n-1; i>=index;i--){
                    if(a[i]>a[index]){
                        swap(a[i],a[index]);
                        break;
                    }
                }

                rev(a,index+1,n-1);

        }





    }
};