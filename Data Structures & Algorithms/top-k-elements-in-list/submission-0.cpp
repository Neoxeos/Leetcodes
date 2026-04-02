class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;

        for (auto& e: nums)
        {
            if ( freq.count(e) > 0)
            {
                freq[e]++;
            }
            else 
            {
                freq[e] = 1;
            }
        }


        map<int, vector<int>> freq2;
        for (auto& [k,v] : freq)
        {
            freq2[v].push_back(k);
        }

        vector<int> res;

        for (auto iter = freq2.rbegin(); iter != freq2.rend(); ++iter)
        {
            if (res.size() < k)
            {
                // since guarantee
                for (int i = 0; i < iter->second.size(); i++)
                {
                    res.push_back(iter->second[i]);
                }
            }
            if (res.size() == k) { break;}
        }

        return res;
    }
};
