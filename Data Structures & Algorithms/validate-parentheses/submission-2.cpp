class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        char ch;
        for (auto i : s) {
            if (st.empty() && ((i == ')') || (i == '}') || (i == ']'))) {
                return false;
            }
            if (!st.empty()) {
                if ((st.top() == '(' && i == ')') || (st.top() == '{' && i == '}') ||
                    (st.top() == '[' && i == ']')) {
                    st.pop();
                } else {
                    st.push(i);
                }
            } else {
                st.push(i);
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
