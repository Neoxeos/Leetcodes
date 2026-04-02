class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s = 0;
        int e = s+1;

        while ( s < nums.size() )
        {
            if ( nums[s] == val )
            {
                // check
                while ( e < nums.size() )
                {
                    if ( nums[e] != val ) 
                    {
                        int tmp = nums[s];
                        nums[s] = nums[e];
                        nums[e] = tmp;
                        break;
                    } 
                    else 
                    {
                        e++;
                    }
                }
                if ( e >= nums.size() ) {break;}
            }
            s++;
            e = s+1;
        }
        
        int k = 0;
        
        // assuming ordered correctly
        for (unsigned i = 0; i < nums.size(); ++i)
        {
            if ( nums[i] != val) {k++; }
            else break;
        }
        return k;
    }
};