class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int toLook;
        int s = 0;
        int e = s;

        while ( s < nums.size() )
        {
            if ( target < 0 ) {  toLook = abs(target-nums[s]);}
            else { toLook = target - nums[s];}
            toLook = target - nums[s];
            e++;
            if ( nums[e] == toLook ) { return vector<int> {s,e};}
            if ( e == nums.size() - 1 ) { s++; e = s; }
        }

        return {};
    }
};
