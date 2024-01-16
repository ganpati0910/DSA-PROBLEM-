/*class RandomizedCollection {
public:
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        
    }
    
    bool remove(int val) {
        
    }
    
    int getRandom() {
        
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

 //Solution 01:
class RandomizedCollection {
public:
    
    vector<pair<int, int>>a;
    unordered_map<int, vector<int>> mp;
    
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        auto it=mp.find(val);
        if(it == mp.end())
        {
            mp[val].push_back(a.size());
            a.push_back(make_pair(val, mp[val].size()-1));
            return true;
        }
        else{
            mp[val].push_back(a.size());
            a.push_back(make_pair(val, mp[val].size()-1));
            return false;
        }
    }
    
    bool remove(int val) {
        auto it=mp.find(val);
        if(it != mp.end()){
            auto last = a.back();
            mp[last.first][last.second] = mp[val].back();
            a[mp[val].back()] = last;
            mp[val].pop_back();
            if(mp[val].empty())
                mp.erase(val);
            a.pop_back();
            return true;
        }
        return false;
         
    }
    
    int getRandom() {
        return a[rand()%a.size()].first;
    }
};

/* * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */