#include <unordered_map>

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        vector<int> result;
        for (const auto& i : nums) {
            ++freqMap[i];
        }
        result.insert(result.end(), freqMap[0], 0);
        result.insert(result.end(), freqMap[1], 1);
        result.insert(result.end(), freqMap[2], 2);
        nums = result;
    }
};