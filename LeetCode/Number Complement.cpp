/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/ */

class Solution {
public:
    int findComplement(int num) {
         /* findComplement using XOR ex: complement of 12 => 1100 => 1111 xor 1100 => 0011  */
         int nd = log2(num)+1;
         int ans = (int)(pow(2,nd)-1) ^ num;
         return ans;
    }
};
