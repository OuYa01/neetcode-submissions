class Solution {
public:

    string encode(vector<string>& strs)
    {
        string delim = "<>";
        string s;
        for (string &str:strs)
        {
            s += (str + delim);
        }

        return s;
    }

    vector<string> decode(string s) 
    {
        vector<string> strs;
        string word;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '<')
            {
                word += s[i];
            }
            else if (s[i+1] != '>')
            {
                 word += s[i];
            }
            else
            {
                strs.push_back(word);
                word.erase();
                i++;
            }
        }

        return strs;

    }
};
