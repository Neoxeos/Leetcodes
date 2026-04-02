class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> check;

        for (auto& e: nums)
        {
            if ( check.count(e) > 0)
            {
                check[e]++;
            }
            else 
            {
                check[e] = 1;
            }
        }

        for (auto& [k,v]: check)
        {
            if (v > 1)
            {
                return true;
            }
        }

        return false;
    }
};
