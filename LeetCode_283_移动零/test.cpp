class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int dest = -1;
        int cur = 0;
        for (cur = 0; cur < nums.size(); cur++) {
            if (nums[cur] != 0) {
                swap(nums[cur], nums[dest + 1]);
                dest++;
            }
        }
    }
};