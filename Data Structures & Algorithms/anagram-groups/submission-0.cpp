using AlphabetCount = std::array<int, 26>;

class Solution {
public:
    AlphabetCount hash(const string& s) {
        AlphabetCount result{};
        for (const auto ch: s) {
            result[ch - 'a']++;
        }

        return result;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<AlphabetCount, vector<string>> m;
        for (const auto& str: strs) {
            auto h = hash(str);
            m[h].push_back(str);
        }

        vector<vector<string>> result;
        result.reserve(m.size());
        for (auto& [_, v] : m) {
            result.push_back(move(v));
        }

        return result;
    }
};
