// Last updated: 7/11/2025, 12:06:47 AM
class MyCircularQueue {
private:
    queue<int> qu;
    int n;

public:
    MyCircularQueue(int k) { n = k; }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        } else {
            qu.push(value);
            return true;
        }
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        } else {
            qu.pop();
            return true;
        }
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        } else {
            return qu.front();
        }
    }

    int Rear() { 
        if(isEmpty()){
            return -1;
        }
        else{
            return qu.back();
        }
    }

    bool isEmpty() { return qu.empty(); }

    bool isFull() { return qu.size() == n; }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */