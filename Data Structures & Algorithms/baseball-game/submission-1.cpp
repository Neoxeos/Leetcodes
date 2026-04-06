class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        stack<int> s;

        for ( unsigned i = 0; i < operations.size(); ++i)
        {
            if (operations[i] == "C")
            {
                s.pop(); // invalidate 
            }
            else if ( operations[i] == "+")
            {
                int n1 = (s.top());
                s.pop();
                int n2 = (s.top());
                s.push(n1);
                s.push(n1+n2);
            }
            else if ( operations[i] == "D")
            {
                int n3 = (s.top());
                cout << "D " << 2*n3 << endl;
                s.push(2*n3);
            }
            else
            {
                int toAdd = stoi(operations[i]);
                s.push(toAdd);
            }
        }

        int r = 0;
        while ( !s.empty() )
        {
            r += s.top();
            s.pop();
        }

        return r;
    }
};