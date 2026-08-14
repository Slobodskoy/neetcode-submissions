class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        for (const auto& c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[':
                    st.push(c);
                    break;
                case ')': {
                    if (st.empty()) return false;
                    auto top = st.top();
                    if (top != '(') return false;
                    st.pop();
                } break;
                case '}': {
                    if (st.empty()) return false;
                    auto top = st.top();
                    if (top != '{') return false;
                    st.pop();
                } break;
                case ']': {
                    if (st.empty()) return false;
                    auto top = st.top();
                    if (top != '[') return false;
                    st.pop();
                } break;
            };
        }

        return st.empty();
    }
};
