class Solution {
   public:
    bool valid(vector<int>& counter, int k) {
        int totalSize = 0, maxFreq = 0;
        for (const auto& c : counter) {
            maxFreq = max(maxFreq, c);
            totalSize += c;
        }

        return totalSize - maxFreq <= k;
    }

    int characterReplacement(string s, int k) {
        int l = 0, r = 0, result = 0;
        vector<int> counter(26);
        while (r < s.size()) {
            counter[s[r] - 'A']++;
            while (!valid(counter, k)) {
                counter[s[l] - 'A']--;
                l++;
            }
            result = max(result, r - l + 1);
            r++;
        }

        return result;
    }
};
