/* https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3354/ */

class Solution {
public:
    //solution 1:
    bool isPowerOfTwo(int n) {
       if(n <= 0)
           return false;
       double dec = log2(n);
       if( abs(dec - int(dec)) > 0 ) //concept is here how to find decimal part //
           return false;
       return true;
    }
    //pow(2, dec) == n//
    
    //solution 2:
    /* 
       if(n<=0)    return false;
        n-=(n&-n);                       //ex: 4 => 00000100, -4 => 11111100, n&-n = n;
        return n==0;
    */
    
    //solution 3:
    /*
      return n > 0 && ((n & (n-1)) == 0);  //if n is power of 2, then n&(n-1) == 0
    */
    
    //solution 4:
    /*
     return n > 0 && Integer.bitCount(n) == 1;
    */
    
};
