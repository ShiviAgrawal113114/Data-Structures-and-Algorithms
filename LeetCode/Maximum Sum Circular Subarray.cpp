/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3330/ */

class Solution {
public:
    /* concept is there canbe two cases: 
       1. maxSubarray is normal subarraymax, find it using kadane's algo
       2. it canbe in circular part so to find it:
                  find the minimum subarray using modified kadane's algo and
                  subtract it from sum of array to get max circular subarray 
       maximum of above two cases would be our final answer 
     
      **Also consider the test case when all elements of array are -ve    */
    
    int maxSubarraySumCircular(vector<int>& A) {
        if(A.size() < 1)
            return 0;
        int sum = 0, temp1 = 0, temp2 = 0, maxx = INT_MIN, minn = INT_MAX;
        for(int i=0;i<A.size();i++)
        {
            if(temp1 < 0)
                temp1 = 0;
            temp1 += A[i];
            maxx = max(temp1, maxx);
            
            if(temp2 > 0)
                temp2 = 0;
            temp2 += A[i];
            minn = min(temp2, minn);
            
            sum += A[i];
        }
        if(maxx < 0)
            return maxx;
        if(minn < 0)
        {  
           minn = sum - minn;
           maxx = max(maxx, minn);
        }
        return maxx;
    }
};
