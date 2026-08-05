class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (const auto n: nums) {
            m[n]++;
        }
        vector<vector<int>> buket(nums.size()+1);
        for (const auto [k, v]: m) {
            buket[v].push_back(k);
        }
        vector<int> result;
        result.reserve(k);
        for (int i = buket.size()-1; i >= 0; i--) {
            for (int j = 0; j < buket[i].size() && result.size() < k; j++) {
                result.push_back(buket[i][j]);
            }
        }

        return result;
    }
};
