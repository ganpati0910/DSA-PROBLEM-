class SeatManager {
public:
    set<int> S;
    SeatManager(int n) {
        #pragma unroll
        for(int i=1; i<=n; i++)
            S.insert(i);
    }
    
    int reserve() {
        auto it=S.begin();
        int x=*it;
        S.erase(it);
        return x;
    }
    
    void unreserve(int seatNumber) {
        S.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */