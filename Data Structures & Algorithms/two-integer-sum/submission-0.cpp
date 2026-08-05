class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            auto elem = m.find(target-nums[i]);
            if (elem != m.end()) {
                auto v = elem->second;
                return vector<int>{v, i};
            }
            m[nums[i]] = i;
        }

        return vector<int>();
    }
};
