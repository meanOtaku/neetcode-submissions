class KthLargest {
private:
    priority_queue<int> pq;
    int kth;
public:
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for(auto a: nums) {
            pq.push(a);
        }
    }
    
    int add(int val) {
        pq.push(val);
        vector<int> temp;
        priority_queue<int> tempq = pq;
        while(!tempq.empty()) {
            temp.push_back(tempq.top());
            tempq.pop();
        }
        if(pq.size() < kth) {
            return temp[pq.size()];
        }
        return temp[kth - 1];
    }
};
