/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/ */

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0,j=s.size()-1; i<j; i++,j--)
        {
            swap(s[i],s[j]);
        }
    }
};
