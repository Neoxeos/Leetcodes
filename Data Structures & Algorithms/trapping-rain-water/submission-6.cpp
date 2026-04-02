class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        if (height.size() == 0 ) { return res;}

        int l = 0; 
        int r = height.size() - 1;

        int lmax = height[l];
        int rmax = height[r];

        while ( l < r )
        {
            if ( lmax < rmax )
            {
                l++;
                lmax = max(lmax, height[l]);
                res += lmax - height[l];
            }
            else 
            {
                r--;
                rmax = max(rmax, height[r]);
                res += rmax - height[r];
            }
        }

        return res;
    }
};
