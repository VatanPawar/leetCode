// Last updated: 7/11/2025, 12:01:50 AM
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        //n*w
        //n*w<maxWe -- reeturn n// else  return maxWeight/w

        if(n*n*w<=maxWeight){
            return n*n;
        }
        else{
            return maxWeight/w;
        }
    }
};