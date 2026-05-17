class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> counts;
        for(auto a: tasks) {
            counts[a]++;
        }

        priority_queue<int> maxheap;
        for(auto a: counts) {
            maxheap.push(a.second);
        }

        int time = 0;
        queue<pair<int, int>> queue;
        while(!maxheap.empty() || !queue.empty()) {
            if(!queue.empty() && time >= queue.front().second) {
                maxheap.push(queue.front().first);
                queue.pop();
            }
            if(!maxheap.empty()) {
                int cnt = maxheap.top() - 1;
                maxheap.pop();
                if(cnt > 0) {
                    queue.push({cnt, time + n + 1});
                }
            }
            time++;
        }
        return time;
    }
};
