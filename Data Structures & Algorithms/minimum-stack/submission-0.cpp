class MinStack {
private:
    vector<pair<int, int>> st;
    
public:

    MinStack() {
        
    }
    
    void push(int val) 
    {
        int min = val;
        if (!st.empty() && st.back().second < val)
            min = st.back().second;
        st.push_back({val, min});
    }
    
    void pop()
    {
        st.pop_back();
    }
    
    int top() 
    {
        return st.back().first;
    }
    
    int getMin()
    {
         return st.back().second;
    }
};
