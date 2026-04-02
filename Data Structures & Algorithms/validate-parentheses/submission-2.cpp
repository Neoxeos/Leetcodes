class Solution {
public:
    bool isValid(string s) {
        stack<char> res;

        for (int i = 0; i < s.length(); i++)
        {
            if ( s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                res.push(s[i]);
            }
            else 
            {
                if (res.empty()) {return false;}
                if ( s[i] == ']' && res.top() == '[') {res.pop();}
                else if ( s[i] == '}' && res.top() == '{') {res.pop();}
                else if ( s[i] == ')' && res.top() == '(') {res.pop();}
                else {return false;}
            }
        }

        if ( res.empty() ) {return true;}
        else {return false;}
    }
};
