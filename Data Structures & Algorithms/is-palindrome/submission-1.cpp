class Solution {
public:
    bool isPalindrome(string s)
    {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int start = 0;
        int end = s.size() - 1;

        while (start <= end)
        {
            if ( (s[start] < '0' || s[start] > '9') && (s[start] < 'a' || s[start] > 'z') )
            {
                start++;
                continue;
            }

            if( (s[end] < '0' || s[end] > '9') && (s[end] < 'a' || s[end] > 'z') )
            {
                end--;
                continue;

            }

            if(s[start] != s[end])
                return false;

            start++;
            end--;
        }

        return true;
    }
};
