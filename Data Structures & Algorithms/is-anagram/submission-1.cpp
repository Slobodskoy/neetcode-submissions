class Solution {
public:
    bool isAnagram(string s, string t) {
         vector<int> counter(26);
         for (const auto& ch: s) {
            counter[ch-'a']++;
         }
         for (const auto& ch: t) {
            counter[ch-'a']--;
         }
         for (const auto c: counter) {
            if (c!=0) {
                return false;
            }
         }

         return true;
    }
};
