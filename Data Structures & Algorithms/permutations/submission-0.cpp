class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        queue<vector<int>> frontier;

        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> tmp {nums[i]};
            frontier.push(tmp);
        }

        while(!frontier.empty())
        {
            vector<int> tmp = frontier.front();
            frontier.pop();

            if (tmp.size() == nums.size())
            {
                res.push_back(tmp);
            }
            else 
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    vector<int> cptmp = tmp;
                    if (count(cptmp.begin(), cptmp.end(), nums[i]) == 0)
                    {
                        cptmp.push_back(nums[i]);
                        frontier.push(cptmp);
                    }
                }
            }
        }

        return res;
    }
};
