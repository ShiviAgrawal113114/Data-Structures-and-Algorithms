/* https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/?track=ppc-arrays&amp;batchId=221 */

// Function to find the subarray with given sum k
// arr: input array
// n: size of array
/* As range of Ai is so large so MAP could cause so many collisions 
so, better to use SLIDING WINDOW technique */
void subarraySum(int arr[], int n, int s){
    
    // Your code here
    if(s <= 0)
     cout<<-1;
    if(arr[0] == s)
      cout<<1<<" "<<1;
    else 
      {
          int i=0,j=0,flag=0,sum=0;
          while(i<n)
          {    
              if(sum < s)
                {  
                   while(i<n && sum < s)
                    sum += arr[i++];
                }
              if(sum > s)
                { 
                  while(j<n && sum > s)
                    sum -= arr[j++];
                }
              if(sum == s)
              {
                  flag = 1;
                  break;
              }
          }
          if(flag == 1)
            cout<<j+1<<" "<<i;
          else
            cout<<-1;
      }
}

