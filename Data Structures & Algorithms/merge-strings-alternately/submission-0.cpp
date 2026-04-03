class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int limit1 = word1.length();
        int limit2 = word2.length();
        int limit = (limit1 <= limit2) ?  limit1 : limit2;
        string res = "";
        for ( unsigned i = 0; i < limit; ++i)
        {
            res += word1[i];
            res += word2[i]; 
        }

        string toAdd = (limit1 <= limit2) ? word2.substr(limit1, limit2-limit1) : word1.substr(limit2, limit1-limit2);
        res += toAdd;
        return res;
    }
};