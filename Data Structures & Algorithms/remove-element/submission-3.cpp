class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int vals = nums.size();
        for (int i = 0; i < vals; ++i) {
            if (nums.at(i) == val) {
                continue;
            }
            nums.push_back(nums.at(i));
        }
        nums.erase(nums.begin(), nums.begin()+vals);
        return nums.size();
    }
};