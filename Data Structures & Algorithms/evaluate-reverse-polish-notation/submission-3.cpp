class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int calc = 0;
        for (auto i : tokens) {
            if ((i == "+") || (i == "-") || (i == "*") || (i == "/")) {
                int x1 = st.top();
                st.pop();
                int x2 = st.top();
                st.pop();
                if (i == "+") {
                    calc = x1 + x2;
                } else if (i == "-") {
                    calc = x2 - x1;
                } else if (i == "*") {
                    calc = x1 * x2;
                } else if (i == "/") {
                    calc = x2 / x1;
                }
                st.push(calc);
                // cout << x1 << i << x2 << " = " << calc << "\n";
            } else {
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};
