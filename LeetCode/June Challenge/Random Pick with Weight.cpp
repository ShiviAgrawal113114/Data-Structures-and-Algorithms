/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3351/ */

class Solution {
public:
    /* randomly pick the elements in proportion of their weight ex: w = {2, 4, 6, 5, 3}
       then on prefix sum => {2, 6, 12, 17, 20} => randomly generate values from 1 to 20
       if it is 1 to 2 ans is 0, if 3 to 6 ans is 1..... */
    vector<int> v;
    Solution(vector<int>& w) 
    { 
        for(int i=1;i<w.size();i++)
        {
            w[i] += w[i-1];
        }
        v = w;
        srand(time(NULL));
    }
    
    int pickIndex() 
    {
        int sum = v.back();
        int index = upper_bound(v.begin(), v.end(), rand()%sum) - v.begin();
        return index;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
