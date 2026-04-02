class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> count;
        for (unsigned i = 0; i < nums.size(); ++i)
        {
            if ( count.contains(nums[i]) ) { count[nums[i]]++;}
            else 
            {
                count[nums[i]] = 1;
            }
        }

        int m = 0;
        int ans;
        for (auto& [k,v] : count)
        {
            if ( v > m ) { m = v; ans = k;}
        }

        return ans;
    }
};