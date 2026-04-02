class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) {return 0;}
        if (s.length() == 1) {return 1;}

        int st = 0;
        int e = st+1;
        string count = "";
        count = s[st];
        int res = 0;

        while (st < s.length() )
        {
            if ( !count.contains(s[e]) )
            {
                count += s[e];
                e++;
                if ( e >= s.length() ) 
                {
                    int m = count.length();
                    res = max(m,res);
                    break;
                }
            } else
            {
                int m = count.length();
                res = max(m,res);
                st++;
                count = s[st];
                e = st+1;
                if ( e >= s.length() ){break;}
            }
        }

        return res;
    }
};
