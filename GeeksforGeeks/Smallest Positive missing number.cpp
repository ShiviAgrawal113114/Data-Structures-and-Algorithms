/* https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number3051/1/?track=ppc-arrays&batchId=221 */

/* concept is like minswap, reach all the positive elements to their respective index
and then iterate from start to check first missing index */

int findMissing(int arr[], int n) { 
    
    // Your code here
    for(int i=0;i<n;i++)
    {
        if(arr[i] > 0 && arr[i] <= n)
        {      
            int v = arr[i];
            int nextval;
            while (arr[v - 1] != v) { 
            nextval = arr[v - 1]; 
            arr[v - 1] = v; 
            v = nextval; 
            if (v <= 0 || v > n) 
                break; 
            }
        } 
              
         
    }
    for(int i=0;i<n;i++)
    {   
        if(arr[i] != (i+1))
           return (i+1);
    }
    return (n+1);
}
