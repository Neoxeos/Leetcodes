class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftP;
        vector<int> rightP;

        for (int i = 0; i < nums.size(); i++)
        {
            if ( i == 0 )
            {
                leftP.push_back(1);
            }
            else 
            {
                leftP.push_back(nums[i-1] * leftP[i-1]);
            }
        }

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if ( i == nums.size() - 1 )
            {
                rightP.push_back(1);
            }
            else 
            {
                rightP.push_back(nums[i+1] * rightP[nums.size() -2- i]);
            }
        }

        cout << rightP[2];

        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if ( i == 0 )
            {
                res.push_back(rightP[rightP.size()-1]);
            }
            else if (i == nums.size() -1)
            {
                res.push_back(leftP[leftP.size()-1]);
            }
            else 
            {
                res.push_back(leftP[i] * rightP[rightP.size()-1-i]);
            }
        }

        return res;
    }
};
