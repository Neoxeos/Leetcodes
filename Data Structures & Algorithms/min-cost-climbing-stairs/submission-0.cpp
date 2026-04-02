class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // lcs 
        // lcs[i] = cost[i] + min{lcs[i-1], lcs[i-2]}
        // ex: lcs[2] = cost[2] + min{lcs[1], lcs[0]}
        // ex: lcs[2] = 3 + min{cost[1] + min{lcs[1-1], lcs[1-2]}, cost[0] + lcs[-1] + lcs[-2]}
        // ex: lcs[2] = 3 + min{2 + min{lcs[0], 0}, 1}
        // ex: lcs[2] = 3 + min{2, 1}
        // ex: lcs[2] = 3 + min{2,1}
        // ex: lcs[2] = 3 + 1 = 4

        // ending
        // ex: lcs[3] = cost[3] + min{lcs[2], lcs[1]}
        // ex: lcs[3] = 0 + min{4, 2}
        // ex: lcs[3] = 0 + 2 = 2

        // dp example so we run lcs on two previous ones
        // all we need is to save two previous results
        vector<int> lcs;
        for (int i = 0; i < cost.size(); i++)
        {
            if (i == 0 || i == 1) {lcs.push_back(cost[i]);}
            else
            {
                int c = cost[i] + min(lcs[i-1], lcs[i-2]);
                lcs.push_back(c);
            }
        }
        lcs.push_back(min(lcs[lcs.size()-1], lcs[lcs.size()-2]));
        return lcs[lcs.size()-1];

    } 
};
