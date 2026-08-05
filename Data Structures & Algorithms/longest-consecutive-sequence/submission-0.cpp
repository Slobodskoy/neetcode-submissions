class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        auto s = unordered_set<int>(nums.begin(), nums.end());
        int result = 0;
        for (const auto& n: s) {
            if (s.contains(n-1))
                continue;
            int localLen = 1;
            while (s.contains(n+localLen)) {
                localLen++;
            }
            result = max(result, localLen);
        }

        return result;
    }
};
