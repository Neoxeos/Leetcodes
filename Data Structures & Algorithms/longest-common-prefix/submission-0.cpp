class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string comp = strs[0];

        for (unsigned i = 1; i < strs.size(); ++i)
        {
            if (comp.length() == 0) { return "";}

            // comp length bigger
            if ( strs[i].length() > comp.length() )
            {
                string lcp = "";
                for (unsigned j = 0; j < comp.length(); ++j)
                {
                    if ( comp[j] != strs[i][j]) { break;}
                    if ( comp[j] == strs[i][j] )
                    {
                        // build lcp
                        lcp += comp[j]; 
                    }
                }
                comp = lcp; 
            }
            else 
            {
                string lcp = "";
                for (unsigned j = 0; j < strs[i].length(); ++j)
                {
                    if ( comp[j] != strs[i][j]) { break;}
                    if ( comp[j] == strs[i][j])
                    {
                        lcp += strs[i][j];
                    }
                }
                comp = lcp;
            }
        }

        return comp;
    }
};