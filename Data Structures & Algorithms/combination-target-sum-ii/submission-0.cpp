class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        queue<vector<pair<int,int>>> frontier;


        for (int i = 0; i < candidates.size(); i++)
        {
            vector<pair<int,int>> tmp;
            tmp.push_back({candidates[i], i});
            frontier.push(tmp);
        }

        while(!frontier.empty())
        {
            vector<pair<int,int>> tmp = frontier.front();
            frontier.pop();
            vector<int> tmp2;
            for (int i = 0; i < tmp.size(); i++)
            {
                tmp2.push_back(tmp[i].first);
            }

            int s = accumulate(tmp2.begin(), tmp2.end(), 0);

            if ( s == target)
            {
                sort(tmp2.begin(), tmp2.end());
                if (count(res.begin(),res.end(), tmp2) == 0 )
                {
                    res.push_back(tmp2);
                }
            }
            else if ( s > target)
            {
                continue;
            }
            else
            {
                int id = tmp[tmp.size()-1].second;
                for (int j = id+1 ; j < candidates.size(); j++)
                {
                    vector<pair<int,int>> cptmp = tmp;
                    cptmp.push_back({candidates[j], j});
                    frontier.push(cptmp);
                }
            }
        }

        return res;
    }
};
