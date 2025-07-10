// Last updated: 7/11/2025, 12:05:37 AM
class SnapshotArray {
public:
    unordered_map<int,unordered_map<int,int>>mp;
    int id=0;
    SnapshotArray(int length) {
        
    }
    
    void set(int index, int val) {
        mp[index][id]=val;//clears when the id is updated
    }
    
    int snap() {
        
        id++;
        return id-1;
    }
    
    
    int get(int index, int snap_id) {
        while(mp[index].find(snap_id)==mp[index].end() && snap_id>=0){
            snap_id--;
        }
        return mp[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */