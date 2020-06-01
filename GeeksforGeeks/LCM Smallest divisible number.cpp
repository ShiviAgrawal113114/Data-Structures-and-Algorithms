/* https://practice.geeksforgeeks.org/problems/smallest-divisible-number/1/?track=ppc-mathematics&batchId=221 */

/* LCM */
long long getSmallestDivNum(long long n)
{
    //Your code here
    if(n <=2)
      return n;
    long long temp = 2;
    long long ans = 2;
    for(long long i = 3; i<=n; i++)
    {
        
        long long gcd = __gcd(temp,i);
        temp = temp*i;
        ans = temp/gcd;
        temp = ans;
    }
    return ans;
    
}

