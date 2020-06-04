/* https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3284/ */

class Solution {
public:
    /* concept is find sum of square of digits, if it leads to 1 ans is true 
    else if resultant number repeats it leads to repeating cycle so ans is false
    */
    bool isHappy(int n) {
        map<int,int> m;
        while(n != 1 && m[n]==0)
        {    
             m[n]++;
             int temp = n;
             n = 0;
            while(temp)
            {
                int rem = temp%10;
                n += rem*rem;
                temp = temp/10;
            }
        }
        if(n == 1)
            return true;
        return false;
    }
};
