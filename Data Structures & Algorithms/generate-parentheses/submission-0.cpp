class Solution {
public:

    bool isValid(string& s, int n)
    {
        int countL = 0;
        int countR = 0;
        for (char c: s)
        {
            if (c == '(')
            {
                countL++;
            }
            if (c == ')')
            {
                countR++;
            }
        }

        if (countL >= countR && countL <= n)
        {
            return true;
        }
        return false;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        stack<string> res;
        
        // mimicking first node expansion
        res.push("(");
        res.push(")");

        while (!res.empty())
        {
            string m = res.top();
            res.pop();

            if (isValid(m, n))
            {
                if (m.length() == 2*n) 
                {
                    result.push_back(m);
                    continue;
                }
                string cp = m;
                m.append("(");
                cp.append(")");
                res.push(m);
                res.push(cp);
            }
        }

        return result;
    }
};
