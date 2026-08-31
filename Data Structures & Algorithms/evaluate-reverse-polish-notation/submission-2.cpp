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
                result  = st.top();
            }
            else
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();

                if (c == "+")
                {
                    result = a + b;
                }
                else if(c == "-")
                {
                    result = a - b;
                }
                else if (c == "*")
                {
                    result = a * b;
                }
                else if (c == "/")
                {
                    if (b == 0)
                        return (1);
                    result = a / b;
                }
                st.push(result);
            }

        }

        return result;
    }
};
