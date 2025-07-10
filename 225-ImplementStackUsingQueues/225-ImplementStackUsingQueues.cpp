// Last updated: 7/11/2025, 12:09:24 AM
#include <queue>

class MyStack {
private:
    std::queue<int> q;
    
public:
    MyStack() {}

    void push(int x) {
        q.push(x);
        int size = q.size();
        while (--size) {  
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};