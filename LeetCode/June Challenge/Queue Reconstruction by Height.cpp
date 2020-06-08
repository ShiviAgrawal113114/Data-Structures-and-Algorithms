/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3352/ */

class Solution {
public:
    /* concept is just sort basis of first value i.e height then compare one by one and place elements to 
       their correct position */
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
          sort(people.begin(), people.end());
          int n = people.size();
          vector<vector<int> > ans(n, vector<int>(2,-1));
        
        for(int i=0; i<n; i++)
        {
            int count = people[i][1];
            for(int j=0; j<n; j++)
            {
                 if(ans[j][0] != -1 && ans[j][0] < people[i][0])
                     count++;
                 else if(j == count)
                 {
                     ans[j][0] = people[i][0];
                     ans[j][1] = people[i][1];
                     break;
                 }
            }
        }
       return ans;   
    }
};
