class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for ( int i = 0; i < strs.size(); i++)
        {
            if ( res.length() == 0)
            {
                res = strs[i];
                res += 1;
            }
            else 
            {
                res += strs[i];
                res += 1;
            } 
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string tmp;
        for ( int i = 0; i < s.length(); i++ )
        {
            if (s[i] != 1)
            {
                tmp += s[i];
            }
            else 
            {
                res.push_back(tmp);
                tmp = "";
            }
        }

        return res;
    }
};
