class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) { return 0; }
        if (nums.size() == 1) { return 1; }

        map<int, int> res;
        for ( auto& e: nums)
        {
            if (res.count(e) == 0)
            {
                res[e] = 1;
            }
        }
        
        int maxSeq = 0;
        int curSeq = 0;
        int last;
        for (auto iter = res.begin(); iter != res.end(); iter++)
        {

            if ( iter == res.begin() )
            {
                curSeq = 1;
                last = iter->first;
            }
            
            if ( iter->first == last + 1 )
            {
                curSeq++;
            }
            else 
            {
                curSeq = 1;
            }

            if ( curSeq > maxSeq )
            {
                maxSeq = curSeq;
            }
            last = iter->first;
        }

        return maxSeq;
    }
};
