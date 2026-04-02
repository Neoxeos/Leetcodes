class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if (position.size() == 1) {return 1;}
        vector<pair<int,int>> cont;

        for (int i = 0; i < position.size(); i++)
        {
            cont.push_back(make_pair(position[i], speed[i]));
        }

        sort(cont.rbegin(), cont.rend());

        stack<float> res;
        float start = static_cast <float> (target - cont[0].first) / static_cast <float> (cont[0].second);
        res.push(start);

        for (int i = 1; i < cont.size(); i++)
        {
            float time = static_cast <float> (target - cont[i].first) / static_cast <float> (cont[i].second);
            if (time <= res.top()) {continue;}
            else 
            {
                res.push(time);
            }
        }

        return res.size();
    }
};
