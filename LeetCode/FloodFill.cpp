/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/ */

class Solution {
public:
    /* This solution is using BFS, it can also be solved using DFS */
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image[sr][sc];
        
        if(n == newColor)
            return image;
        queue<pair<int,int> > q;
        q.push({sr, sc});
        pair<int,int> del = {-1,-1};
        q.push(del);
        int r = image.size(), c = image[0].size();
        while(!q.empty())
        {
            while(q.front() != del)
            {
                pair<int,int> p = q.front();
                q.pop();
                int i = p.first;
                int j = p.second;
                image[i][j] = newColor;
                
                //top
                if((i-1)>=0 && (image[(i-1)][j] == n) )
                    q.push({(i-1),j});
                
                //bottom
                if((i+1)< r && (image[(i+1)][j] == n) )
                    q.push({(i+1),j});
                
                //left
                if((j-1)>=0 && (image[i][(j-1)] == n) )
                    q.push({i,(j-1)});
                
                //right
                if((j+1)<c && (image[i][(j+1)] == n) )
                    q.push({i,(j+1)});
                
            }
            q.pop();
            if(!q.empty())
                q.push(del);
        }
        return image;
    }
};
