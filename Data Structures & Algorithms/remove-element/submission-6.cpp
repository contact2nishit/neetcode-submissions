class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int vals = nums.size();
        // for (int i = 0; i < vals; ++i) {
        //     if (nums.at(i) == val) {
        //         continue;
        //     }
        //     nums.push_back(nums.at(i));
        // }
        // nums.erase(nums.begin(), nums.begin()+vals);
        // return nums.size();
        int k = 0;
        int j = nums.size() -1;
        while (k <= j) {
            if (nums.at(j) == val) {
                --j;
            } else if (nums.at(k) == val) {
                nums.at(k) = nums.at(j);
                ++k;
                --j;
            } else {
                ++k;
            }
            //std::cout << k << std::endl;
        }
        return k;
    }
};