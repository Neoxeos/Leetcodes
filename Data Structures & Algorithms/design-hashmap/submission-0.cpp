class MyHashMap {
    vector<pair<int,int>> con; 
public:
    MyHashMap() {
        
    }

    bool contains (int key)
    {
        for ( unsigned i = 0; i < con.size(); i++ )
        {
            if ( con[i].first == key) { return true;}
        }
        return false;
    }   

    void put(int key, int value) {
        for ( unsigned i = 0; i < con.size(); ++i)
        {
            if ( con[i].first == key ) { con[i].second = value; return;}
        }

        con.push_back(make_pair(key,value));
    }
    
    int get(int key) {
        for (unsigned i = 0; i < con.size(); i++)
        {
            if (con[i].first == key) { return con[i].second;}
        }
        return -1;
    }
    
    void remove(int key) {
        vector<pair<int, int>> n;
        for ( unsigned i = 0; i < con.size(); ++i)
        {
            if ( con[i].first != key ) { n.push_back(con[i]); }
        }

        con.clear();
        con = n;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */