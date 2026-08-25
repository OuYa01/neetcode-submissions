class Solution {
public:
    string encode(vector<string>& strs) 
    {
        string encoded_string = "";
        
        for (string& s : strs)
        {
            encoded_string += to_string(s.size()) + "#" + s;
        }

        return encoded_string;
    }

    
    vector<string> decode(string s) 
    {
        vector<string> strs;
        int i = 0;
        
        while (i < s.size())
        {
            int delim_pos = s.find('#', i);
            int size_of_word = stoi(s.substr(i, delim_pos - i));

            string word = s.substr(delim_pos + 1, size_of_word);
            strs.push_back(word);
            i = 1 + delim_pos + size_of_word;
        }
        
        return strs;
    }
};