class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        for (int l = 0; l < n - 2; ++l) {
            if (l > 0 && nums[l] == nums[l - 1]) {
                continue;
            }
            int m = l + 1, r = n - 1;
            while (m < r) {
                int sum = nums[l] + nums[m] + nums[r];
                if (sum == 0) {
                    result.push_back({nums[l], nums[m], nums[r]});
                    while (m < r && nums[m + 1] == nums[m]) m++;
                    while (m < r && nums[r - 1] == nums[r]) r--;
                    m++;
                    r--;
                } else if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    m++;
                }
            }
        }

        return result;
    }
};
