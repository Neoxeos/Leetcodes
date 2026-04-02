class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;

        for (auto& token: tokens)
        {
            if (token == "+")
            {
                int opOne = res.top();
                res.pop();
                int opTwo = res.top();
                res.pop();
                int ans = opTwo + opOne;
                res.push(ans);
            }
            else if (token == "-")
            {
                int opOne = res.top();
                res.pop();
                int opTwo = res.top();
                res.pop();
                int ans = opTwo - opOne;
                res.push(ans);
            }
            else if (token == "/")
            {
                int opOne = res.top();
                res.pop();
                int opTwo = res.top();
                res.pop();
                int ans = opTwo / opOne;
                res.push(ans);
            }
            else if (token == "*")
            {
                int opOne = res.top();
                res.pop();
                int opTwo = res.top();
                res.pop();
                int ans = opTwo * opOne;
                res.push(ans);
            }
            else 
            {
                res.push(stoi(token));
            }
        }

        return res.top();
    }
};
