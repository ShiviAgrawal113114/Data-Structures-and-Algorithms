/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3357/ */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, j, k, n = nums.size();
        i=0,j=0,k=n-1;
        for(j=0;j<=k;)
        {
            if(nums[j] == 0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j] == 2)
            {
                swap(nums[k],nums[j]);
                k--;
            }
            else
                j++;
        }
    }
};
