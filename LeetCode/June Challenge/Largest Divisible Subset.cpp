/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3359/ */

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size() <=1 )
            return nums;
        sort(nums.begin(),nums.end());
        
        vector<int> arr(nums.size(),1);
        int mx = 1;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j] == 0)
                    arr[i] = max(arr[i], arr[j]+1);
                
            }
            mx = max(mx,arr[i]);
            //cout<<arr[i]<<" ";
        }
        vector<int> res;
        int prev = 0;
        for(int i=arr.size()-1;i>=0 && mx>0;i--)
        {
            if(arr[i] == mx)
            {   //cout<<arr[i]<<" "<<prev%arr[i]<<"-";
                if(prev%nums[i] == 0)
                { 
                    res.push_back(nums[i]);
                    mx--;
                    prev = nums[i];
                }
                
            }
        }
        return res;    
    }
};
