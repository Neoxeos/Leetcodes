class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int subSum = nums[0];
        for ( int i = 1; i < nums.size(); i++)
        {
            subSum += nums[i];
            if ( subSum < 0 ) {
                subSum = 0;    
                if (nums[i] > nums[i-1]) { maxSum = nums[i];} 
            }
            else if (subSum > 0)
            {
                if (subSum > maxSum) { maxSum = subSum; }
            }

        }
        return maxSum;
    }
};
