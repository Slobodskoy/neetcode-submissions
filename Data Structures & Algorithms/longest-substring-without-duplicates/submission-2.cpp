class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charIdx(128);
        int l = 0, result = 0;
        for (int r = 0; r < s.size(); r++) {
            l = max(l, charIdx[s[r]]);
            result = max(result, r - l + 1);
            charIdx[s[r]] = r + 1;
        }

        return result;
    }
};
