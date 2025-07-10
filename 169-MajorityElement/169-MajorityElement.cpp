// Last updated: 7/11/2025, 12:09:45 AM
class Solution {
public:
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}
    int majorityElement(vector<int>& a) {
        a = quickSort(a);
        int n = a.size();
        int n2;
        if(n%2==0){
                n2 = n/2;
        }
        else{n2 = n/2+1;}
        
        
        int temp;
        int count=1;

        if(n>1){
        
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                if(count>=n2){
                    temp=a[i];
                    break;
                }
                count=1;
            }

            else{count++;}

            if(i==n-2 && a[i]==a[i+1]){
                if(count>=n2){
                    temp=a[n-1];
                    
                }
            }

     }}

     else{
        temp = a[0];
     }



        return temp;
        
    }
};