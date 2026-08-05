class Solution {
public:

    string encode(const vector<string>& strs) {
        int totalLen = 0;
        for (const auto& s: strs) {
            totalLen += s.size();
        }
        string result;
        result.reserve(totalLen+3*strs.size());
        for (const auto& s: strs) {
            result += format("{:03}", s.size());
            result += s;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int idx = 0;
        while (idx < s.size()) {
            int size;
            from_chars(s.data()+idx, s.data()+idx + 3, size);
            idx+=3;
            result.push_back(s.substr(idx, size));
            idx+=size;
        }

        return result;
    }
};
