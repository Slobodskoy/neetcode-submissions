class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0) {
            return false;
        }
        int count = 1, candidate = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i]==candidate) {
                count++;
            } else {
                count--;
                if (count==0) {
                    candidate = nums[i];
                    count = 1;
                }
            }
        }

        return count > 1;
    }
};