class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> toAdd;
        res.push_back(toAdd);
        queue<vector<int>> frontier;

        for (auto& e: nums)
        {
            vector<int> a{e};
            frontier.push(a);
        }

        while (!frontier.empty())
        {
            vector<int> e = frontier.front();
            frontier.pop();

            res.push_back(e);

            auto it = find(nums.begin(),nums.end(),e[e.size()-1]);
            int id = distance(nums.begin(), it);

            for (int i = id + 1; i < nums.size(); i++)
            {
                vector<int> c = e;
                c.push_back(nums[i]);
                frontier.push(c);
            }
        }

        return res;
    }
};
