class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> emp;
        res.push_back(emp);
        queue<vector<pair<int,int>>> frontier;

        for (int i = 0; i < nums.size(); i++)
        {
            vector<pair<int,int>> tmp;
            tmp.push_back({nums[i], i});
            frontier.push(tmp);
        }

        while(!frontier.empty())
        {
            vector<pair<int,int>> toAdd = frontier.front();
            frontier.pop();

            vector<int> tmp;
            for (int i = 0; i < toAdd.size(); i++)
            {
                tmp.push_back(toAdd[i].first);
            }
            sort(tmp.begin(), tmp.end());
            if (count(res.begin(), res.end(), tmp) == 0)
            {
                res.push_back(tmp);
            }


            int id = toAdd[toAdd.size()-1].second;

            for (int i = id+1; i < nums.size(); i++)
            {
                vector<pair<int,int>> cptmp = toAdd;
                cptmp.push_back({nums[i], i});
                frontier.push(cptmp);
            }

        }

        return res;
    }
};
