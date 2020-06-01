/* https://practice.geeksforgeeks.org/problems/exactly-3-divisors/1/?track=ppc-mathematics&batchId=221 */

/* No. which is perfect square and whoose sqrt is prime no. only have exacly 3 divisors */
int exactly3Divisors(int N)
{   if(N<4)
       return 0;

    double sq = sqrt(N);
    int n = floor(sq);
    vector<int> arr(n+1, -1);
    arr[0] = 1;
    arr[1] = 1;
    int count = 1;
    /////////////prime seive////////////////
    for(int i=4; i<=n; i+=2)
      {   
          arr[i] = 1;
      }
    for(int i=3; i<=n; i += 2)
    {   
        if(arr[i] == -1)
        {   count++;
            for(int j=i*2; j<=n; j += i)
               arr[j] = 1;
        }
    }
    return count;
}
