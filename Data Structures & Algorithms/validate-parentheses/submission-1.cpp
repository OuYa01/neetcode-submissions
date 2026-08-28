class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        int i;

        if (s.empty())
            return true;

        st.push(s[0]);
        for (i = 1; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                if (!st.empty() && ( (st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']') ) )
                    st.pop();
                else    
                    return false;
            }
        }


        return st.empty();
        
    }
};
