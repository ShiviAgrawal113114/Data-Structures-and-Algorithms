/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3358/ */

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int,long int> m;
    vector<int> arr;
    RandomizedSet() {
        m.clear();
        arr.clear();
        srand(time(NULL));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m[val] != 0)
            return false;
        int n = arr.size();
        m[val] = n+1;
        arr.push_back(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m[val] == 0)
            return false;
        int n = arr.size();
        m[arr[n-1]] = m[val];
        swap(arr[n-1], arr[m[val]-1]); /////////concept is to delete u can swap it with last element////////
        m[val] = 0;
        arr.pop_back();
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int n = arr.size();
        int index = rand()%n;
        return arr[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
