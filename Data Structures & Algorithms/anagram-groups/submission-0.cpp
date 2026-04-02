class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy_strs = strs;
        map<string, vector<string>> res;
        
        for (int i = 0; i < copy_strs.size(); i++)
        {
            sort(copy_strs[i].begin(), copy_strs[i].end());
        }

        for ( int i = 0; i < strs.size(); i++)
        {
            if ( res.count(copy_strs[i]) > 0)
            {
                res[copy_strs[i]].push_back(strs[i]);
            }
            else
            {
                res[copy_strs[i]] = {strs[i]};
            }
        }

        vector<vector<string>> result;

        for (auto& [k,v]: res)
        {
            result.push_back(v);
        }

        return result;
    }
};
