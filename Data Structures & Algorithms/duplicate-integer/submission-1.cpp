class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> check;
        for (unsigned i =0; i < nums.size(); ++i)
        {
            check.insert(nums[i]);
        }

        if (check.size() != nums.size()) {return true;}
        return false;
    }
};