class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int l = 0, r = 0, result = 0;
        while (r < s.size()) {
            if (set.contains(s[r])) {
                result = max(result, r - l);
                while (l <= r && s[l] != s[r]) {
                    set.erase(s[l]);
                    l++;
                }
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            r++;
        }

        result = max(result, r - l);
        
        return result;
    }
};
