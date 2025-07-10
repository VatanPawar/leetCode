// Last updated: 7/11/2025, 12:04:21 AM
class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> pq;

    SeatManager(int n) {
        for (int i = 1; i <= n; i++) {
            pq.push(i); // O(log n) per push
        }
    }

    int reserve() {
        int seat = pq.top();
        pq.pop();       // O(log n)
        return seat;
    }

    void unreserve(int seatNumber) {
        pq.push(seatNumber); // O(log n)
    }
};
