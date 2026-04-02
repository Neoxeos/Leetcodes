class Solution {
public:
    int climbStairs(int n) {
        // base case
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else 
        {
            return climbStairs(n-1) + climbStairs(n-2);
        }
    }
};
