class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> st;
        int a, b;
        int result;

        for (string& c : tokens)
        {
            if (c != "+" && c != "-" && c != "*" && c != "/")
            {
                st.push(stoi(c));
            }
            else
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();

                if (c == "+")
                {
                    st.push(a + b);
                }
                else if(c == "-")
                {
                    st.push(a - b);
                }
                else if (c == "*")
                {
                    st.push(a * b);
                }
                else if (c == "/")
                {
                    st.push(a / b);
                }
            }

        }

        return st.top();
    }
};
