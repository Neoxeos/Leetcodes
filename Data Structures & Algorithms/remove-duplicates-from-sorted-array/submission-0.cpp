class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size(), l = 0, r = 0;

        while ( r < size)
        {
            nums[l] = nums[r];
            while ( r < size && nums[l] == nums[r])
            {
                r++;
            }
            l++;
        }

        return l;
    }
};