class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int prev = -1;
        int next = 1;
        for(int i = 0; i < flowerbed.size(); ) {
            if((prev < 0 || flowerbed[prev] == 0) && 
                flowerbed[i] == 0 && 
                (next >= flowerbed.size() || flowerbed[next] == 0)){
                    i = i + 2;
                    count++;
                    prev = prev + 2;
                    next = next + 2;
                    cout << count << endl;
                }else {
                    i++;
                    prev++;
                    next++;
                }
        }
        return (count >= n);
    }
};