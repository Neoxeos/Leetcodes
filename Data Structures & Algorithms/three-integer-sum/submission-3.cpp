class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> check;

        if ( nums.size() < 3 ) { return {};}

        int s = 0;
        int e = s+1;

        while ( s < nums.size()-2)
        {
            int target = nums[s] + nums[e];

            while ( e < nums.size() -1)
            {
                for ( unsigned i = e+1; i < nums.size(); ++i)
                {
                    if (target + nums[i] == 0) 
                    {
                        vector toAdd = {nums[s], nums[e], nums[i]};
                        sort(toAdd.begin(), toAdd.end());
                        check.insert(toAdd);
                        break;
                    }
                }
                e++;
                target = nums[s] + nums[e];
            }
            s++;
            e = s+1;
        }

        vector<vector<int>> res(check.begin(), check.end());
        return res;
    }
};
