class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        queue<vector<int>> frontier;

        for (auto& e: nums)
        {
            vector<int> c{e};
            frontier.push(c);
        }

        while (!frontier.empty())
        {
            vector<int> temp = frontier.front();
            frontier.pop();
            int s = accumulate(temp.begin(), temp.end(),0);

            if (s == target)
            {
                sort(temp.begin(),temp.end());
                if (count(res.begin(),res.end(), temp) == 0)
                {
                    res.push_back(temp);
                }
            }
            else if (s > target)
            {
                continue;
            }
            else 
            {
                for (int j = 0; j < nums.size(); j++)
                {
                    vector<int> cp = temp;
                    cp.push_back(nums[j]);
                    frontier.push(cp);
                }
            }
        }

        return res;
    }
};
