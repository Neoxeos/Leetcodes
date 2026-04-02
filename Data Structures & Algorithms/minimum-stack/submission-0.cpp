class MinStack {
public:

    vector<int> myStack;
    MinStack() {
    }
    
    void push(int val) {
        this->myStack.push_back(val);
    }
    
    void pop() {
        this->myStack.erase(this->myStack.begin() + (this->myStack.size()-1));
    }
    
    int top() {
        return this->myStack[this->myStack.size()-1];
    }
    
    int getMin() {
        int res = INT_MAX;

        for (int i = 0; i < this->myStack.size(); i++)
        {
            if ( this->myStack[i] < res )
            {
                res = this->myStack[i];
            }
        }

        return res;
    }
};
