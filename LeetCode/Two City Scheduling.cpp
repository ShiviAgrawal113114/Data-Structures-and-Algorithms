/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/ */
/* https://www.youtube.com/watch?v=vtNoP43hGJA */

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        /* as it is not allowed to make change in costs matrix we would use heap(priority queue) */
        /* concept is to find max profit to choose A rather than B or vice-versa by taking difference */
        priority_queue<pair<int,int> > pq;
        int n = costs.size();
        for(int i=0; i<n; i++)
        {
            int diff = costs[i][1] - costs[i][0];
            pq.push({diff, i});
        }
        int k=0, ans = 0;
        while(!pq.empty())
        {   
            int index = pq.top().second;
            if(k<n/2)
                ans += costs[index][0];
            else
                ans += costs[index][1];
            k++;
            pq.pop();
                
        }
        return ans;
    }
};
