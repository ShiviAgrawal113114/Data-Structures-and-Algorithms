/* https://www.codechef.com/COOK118B/problems/CHEFRECP */

#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];
        map<int,int> visited;
        map<int,int> freq;
        int x, flag = 0;
        int i = 0;
        while(i<n)
        {   
            x = arr[i];
            //cout<<x<<"->"<<visited[x]<<"- ";
            if(visited[x])
            {
                flag = -1;
                break;
            }
            i++;
            visited[x]++;
            while(i<n && arr[i] == x)
            {
                i++;
                visited[x]++;
            }
            //cout<<freq[visited[x]]<<"* ";
            if(freq[visited[x]])
            {
                flag = -1;
                break;
            }
            freq[visited[x]]++;
        }
        if(flag == -1)
           cout<<"NO"<<endl;
        else
           cout<<"YES"<<endl;
    }
    
return 0;
}
