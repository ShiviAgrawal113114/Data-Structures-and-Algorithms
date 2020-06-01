/* https://practice.geeksforgeeks.org/problems/modular-multiplicative-inverse-1587115620/1/?track=ppc-mathematics&batchId=221 */

/* Extended Euclidean Theorem 
   Fermat’s Little Theorem */
int Extended_gcd(int a, int b, int*x, int*y)
{
    if(a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = Extended_gcd(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
}
int modInverse(int a, int m)
{
    //Your code here
    if(m == 1)
      return -1;
    int x, y;
    int gcd = Extended_gcd(a, m, &x, &y);
    if(gcd != 1)
      return -1;
    x = (x%m + m)%m;
    return x;
    
}
