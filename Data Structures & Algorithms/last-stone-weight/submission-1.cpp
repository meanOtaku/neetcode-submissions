class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int x, y, z;
        for(auto a: stones) {
            pq.push(a);
        }
        while(pq.size() > 1) {
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            z = abs(x - y);
            cout << x << " - " << y << " = " << z << endl;
            if(z > 0) {
                pq.push(z);
            }
        }
        if(pq.empty()) {
            return 0;
        }
        return pq.top();
    }
};
