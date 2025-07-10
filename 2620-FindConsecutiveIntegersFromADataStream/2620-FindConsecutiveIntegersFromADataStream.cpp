// Last updated: 7/11/2025, 12:03:23 AM
class DataStream {
public:
int v,k;
queue<int>q;
    DataStream(int value, int k) {
        this->v=value;
        this->k=k;
    }
    
    bool consec(int num) {

        if(num==v){
            q.push(num);
            if(q.size()>=k){
                return 1;
            }
            else {
                return 0;
            }
        }
        else{
            while(!q.empty()){q.pop();}
            return 0;
        }
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
































































