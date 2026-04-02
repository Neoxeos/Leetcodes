class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0;
        int next = start + 1;
        int maxArea = 0;

        while (start < (heights.size() - 1))
        {
            //cout << next << endl;
            int check = (next - start) * min(heights.at(start), heights.at(next));

            if ( check > maxArea )
            {
                maxArea = check;
            }

            next++;
            if ( next == heights.size() )
            {
                start++;
                next = start + 1;
            }
        }

        return maxArea;
    }
};
