// Last updated: 7/11/2025, 12:03:42 AM

class SmallestInfiniteSet {
public:
priority_queue<int,vector<int>,greater<int>>pq;

vector <int> mp;

    SmallestInfiniteSet() {
        int t=1000;
        mp=vector<int>(1001,-1);
        while(t>0){
            pq.push(t--);
            mp[t]=1;
        }
    }
    
    int popSmallest() {
        cout<<"popping "<<pq.top()<<endl;
        int temp=pq.top();pq.pop();
        mp[temp]=-1;
        return temp;
    }
    
    void addBack(int num) {
        if(mp[num]==-1){
        pq.push(num);
        mp[num]=1;}
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */