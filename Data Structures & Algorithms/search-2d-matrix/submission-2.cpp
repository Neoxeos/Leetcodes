class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowC = 0;
        int highC = matrix.size() -1;
        int midC;
        // col binary search
        while (lowC <= highC)
        {
            midC = lowC + ((highC-lowC)/2);

            if (matrix[midC][0] == target) { return true;}
            else if (matrix[midC][0] < target)
            {
                lowC = midC + 1;
            }
            else
            {
                highC = midC - 1;
                if (highC < lowC && highC > 0) {midC = midC - 1;}
            }
        }

        // row binary search
        int lowR = 0;
        int highR = matrix[midC].size() - 1;

        while (lowR <= highR)
        {
            int midR = lowR + ((highR-lowR)/2);

            if (matrix[midC][midR] == target) { return true;}
            else if (matrix[midC][midR] < target)
            {
                lowR = midR + 1;
            }
            else 
            {
                highR = midR - 1;
            }
        }

        return false;
    }
};
