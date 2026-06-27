class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true;
        int target = nums.size() - 1;
        int counter = nums.size() - 2;
        while (target != 0) {
            if ((target - counter) <= nums[counter]) target = counter;
            std::cout << target << std::endl;
            --counter;
            if (target == 0) return true;
            if (counter < 0) return false;
        }
        return true;
    }
};
