class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        if (t.size() == 1) { return vector<int> {0}; }
        int s = 0;
        int e = s+1;
        vector<int> res;

        while (s < t.size())
        {
            if (s == t.size() -1) 
            {
                // last elem 
                res.push_back(0);
                break;
            }
            if (t[e] <= t[s])
            {
                e++;
                if (e == t.size())
                {
                    res.push_back(0);
                    s++;
                    e = s+1;
                }
            }
            else 
            {
                cout <<s << " vs " << e << endl;
                res.push_back(e-s);
                s++;
                e = s+1;
            }
        }

        return res;
    }
};
