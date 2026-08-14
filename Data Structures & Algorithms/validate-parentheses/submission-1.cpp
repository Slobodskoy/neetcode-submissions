class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        for (const auto& c : s) {
            if (c == '(')
                st.push(')');
            else if (c == '{')
                st.push('}');
            else if (c == '[')
                st.push(']');
            else {
                if (st.empty()) return false;
                auto top = st.top();
                if (c != top) return false;
                st.pop();
            }
        }

        return st.empty();
    }
};
