// Last updated: 7/11/2025, 12:04:38 AM
class FrontMiddleBackQueue {
private:
    deque<int> dq;

public:
    FrontMiddleBackQueue() {}

    void pushFront(int val) {
        dq.push_front(val);
    }

    void pushMiddle(int val) {
        int middleIndex = dq.size() / 2;
        dq.insert(dq.begin() + middleIndex, val);
    }

    void pushBack(int val) {
        dq.push_back(val);
    }

    int popFront() {
        if (dq.empty()) return -1;
        int result = dq.front();
        dq.pop_front();
        return result;
    }

    int popMiddle() {
        if (dq.empty()) return -1;
        int middleIndex = (dq.size() - 1) / 2;
        int result = dq[middleIndex];
        dq.erase(dq.begin() + middleIndex);
        return result;
    }

    int popBack() {
        if (dq.empty()) return -1;
        int result = dq.back();
        dq.pop_back();
        return result;
    }
};