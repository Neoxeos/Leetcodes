class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastStep = nums.size()-1;
        for (int i = nums.size()-2; i >= 0; i--)
        {
            if ( (nums[i] + i) >= lastStep )
            {
                lastStep = i;
            }
        }
        if (lastStep == 0) {return true;}
        return false;
    }
};
