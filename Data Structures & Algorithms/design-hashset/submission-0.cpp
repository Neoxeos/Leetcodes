class MyHashSet {
    vector<int> con;
public:
    MyHashSet() {
    }
    
    void add(int key) {
        if ( this->contains(key) ) { return;}
        else 
        {
            con.push_back(key);
        }
    }
    
    void remove(int key) {
        vector<int> n;
        for ( unsigned i = 0; i < con.size(); ++i )
        {
            if ( con[i] != key)
            {
                n.push_back(con[i]);
            }
        }

        con.clear();
        con = n;
    }
    
    bool contains(int key) {
        for ( unsigned i = 0; i < con.size(); ++i)
        {
            if ( con[i] == key ) { return true;}
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */