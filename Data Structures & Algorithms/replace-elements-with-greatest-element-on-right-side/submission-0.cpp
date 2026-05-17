class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> heap = arr;
        vector<int> result;
        for(int i = 0; i < arr.size(); i++) {
            if(i == arr.size() - 1) {
                result.push_back(-1);
                continue;
            }
            heap = arr;
            make_heap(heap.begin() + i + 1, heap.end());
            result.push_back(heap[i + 1]);
        }
        return result;
    }
};