class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int t = s+1;

        while ( s < numbers.size() )
        {
            int toLook = target - numbers[s];

            if ( numbers[t] == toLook )
            {
                break;
            }
            else 
            {
                t++;
            }
            if ( t == numbers.size() )
            {
                s++;
                t = s+1;
            }

        }

        return {s+1,t+1};
    }
};
