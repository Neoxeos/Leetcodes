class Solution {
public:
    bool isPalindrome(string s) {
        string copys;
        for (auto& c: s )
        {
            if ( isalnum(c) )
            {
                copys.push_back(tolower(c));
            }
        }

        int st = 0;
        int en = copys.length()-1;

        while ( st < en )
        {
            if ( copys[st] != copys[en] )
            {
                return false;
            }
            st++;
            en--;
        }
        return true;
    }
};
