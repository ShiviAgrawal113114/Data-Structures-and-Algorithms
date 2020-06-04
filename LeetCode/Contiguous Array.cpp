/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3341/ */

class Solution {
public:
    /* concept is to treat 0 => -1 and 1 => 1 now ques changed to find the maxlength of
       subarray whoose sum is 0 */
    int findMaxLength(vector<int>& nums) {
        map<int,int> m;
        int ans = 0;
        int temp = 0;
        for(int i=0;i<nums.size();i++)
        { 
            if(nums[i] == 0)
               temp--;
            else
               temp++;
            
            
            if(temp == 0)
                ans = max(ans, i+1);
            else if(!m.count(temp))
                m[temp] = i;
            else
                ans = max(ans, (i-m[temp]));
        }
        return ans;
    }
};
