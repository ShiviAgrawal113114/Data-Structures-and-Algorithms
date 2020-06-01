/* https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1/?track=ppc-arrays&batchId=221 */

/* compare elements from last of arr1 and start of arr2 and swap if 
arr2 elements are smaller, repeat this step till arr2 elemt is smaller
then sort both the arrays to get desired result */

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    //Your code here
    //n is size of arr1
    //m is size of arr2
    int i = n-1,j=0;
    while(i>=0 && j<m)
    {
        if(arr1[i] > arr2[j])
         { 
             swap(arr1[i],arr2[j]);
             i--;
             j++;
         }
         else
           break;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
} 

