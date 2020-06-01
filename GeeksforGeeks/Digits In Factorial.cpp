/* https://practice.geeksforgeeks.org/problems/digits-in-factorial/1/?track=ppc-mathematics&batchId=221 */

/* factorial(n) = 1*2*...*n
   no of digits is calculated using log10(n);
   log(a*b) = log(a) + log(b) 
   using this property solve it */

int digitsInFactorial(int N)
{
    //Your code here
    if(N<0)
     return 0;
    if(N <=3)
      return 1;
    double dig = 0;
    for(int i=2; i<=N; i++)
    {
        dig += log10(i);
    }
    int ans = floor(dig)+1;
    return ans;
}
