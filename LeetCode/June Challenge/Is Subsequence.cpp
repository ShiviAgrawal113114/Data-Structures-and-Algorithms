/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3355/ */

/* This canbe solved simply by iterating both the strings and find coming characters */
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.length() < s.length())
            return false;
        if(s.length() == 0)
            return true;
        map<char, vector<int> > m;
        for(int i=0; i<t.length(); i++)
        {
            m[t[i]].push_back(i);
        }
        
        
        if(m[s[0]].empty())
            return false;
        int prev_index = m[s[0]][0];
         
        for(int i=1; i<s.length(); i++)
        {    
            if(m[s[i]].empty())
                return false;
            int index = -1;
            for(int j=0;j<m[s[i]].size();j++)
            {
                if(m[s[i]][j] > prev_index)
                {
                    index = m[s[i]][j];
                    break;
                }
            }
             
            if(index == -1)
                return false;
            prev_index = index;
        }
        return true;
    }
};
