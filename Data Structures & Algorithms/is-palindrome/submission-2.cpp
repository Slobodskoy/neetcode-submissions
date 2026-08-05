class Solution {
public:
    bool isPalindrome(const string& s) {
        int l = 0, r = s.size()-1;
        while (l<r) {
            while (l < r && !isalnum(s[l]))
                l++;
            while (l < r && !isalnum(s[r]))
                r--;
            if ((s[l] & 0xDF) != (s[r] & 0xDF)) {
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};
