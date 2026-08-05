class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1;
        while (l<r) {
            while (l < r && !(s[l]>='a' && s[l]<='z' || s[l]>='A' && s[l]<='Z' || s[l]>='0' && s[l]<='9'))
                l++;
            while (l < r && !(s[r]>='a' && s[r]<='z' || s[r]>='A' && s[r]<='Z' || s[r]>='0' && s[r]<='9'))
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
