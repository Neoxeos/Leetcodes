class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            // base case 
            if ( i == 0 || i == 1) {res.push_back(nums[i]);}
            else if (i == 2) {res.push_back(nums[i] + res[i-2]);}
            else
            {
                res.push_back(nums[i] + max(res[i-2], res[i-3]));
            }
        }

        int r =  *max_element(res.begin(), res.end());
        cout << res[res.size()-1] << endl;
        return r;
    }
};
