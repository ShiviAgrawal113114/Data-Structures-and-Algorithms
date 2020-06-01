/*  https://www.codechef.com/COOK118B/problems/CHFIMPRS/ */

/* test for this test case:- 
3
1 2
1 1
2 2
1 1
2 1
5 5
1 2 3 4 5
6 5 4 3 2
2 3 4 5 6
5 4 3 2 1
0 0 0 0 0
*/

#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int arr[n][m];
        map<int,int> mm;
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                mm[arr[i][j]]++;
            }
        }
    int count_odd = 0;
    for(auto it=mm.begin(); it != mm.end(); it++)
    {
        if((it->second)%2 == 1)
           count_odd++;
    }
    if(m%2 == 0 && count_odd > 0)
    {
        cout<<-1<<endl;
        continue;
    }
    if(m%2 == 0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j = 0; j<m;j++)
              cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        continue;
    }
    if(count_odd > n)
        cout<<-1<<endl;
    else /////////////////////////////////////////////real logic is in this part//////////
    {    
        //cout<<1<<endl;
        int k = m/2, l = 0, i=0, j=0, ti, tj;
        for(auto it = mm.begin(); it != mm.end(); it++)
        {   //cout<<it->first<<" "<<it->second<<"--";
            if(it->second%2 == 1)
            {
                arr[l][k] = it->first;
                //cout<<"{"<<l<<","<<k<<"} ";
                l++;
                it->second -= 1;
            }
             
            it->second /= 2;
            int flag = 0;
                for(; i<n; i++)
                {   
                     
                    for( ; j<k; j++)
                    {   
                        if(it->second <= 0)
                        {   ti = i;
                            tj = j;
                            flag = -1;
                            break;
                        }
                        arr[i][j] = it->first;
                        it->second -= 1;
                        //cout<<"{"<<i<<","<<j<<"} ";
                    }
                    j = 0;
                    if(flag == -1)
                       break;
                    
                }
                if(i==n)
                {
                    i = n;
                    j = 0;
                }
                else
                {
                i = ti;
                j = tj;
                }
                if(i == n && it->second)
                {   it->second *= 2;
                    while(it->second)
                    {
                        arr[l][k] = it->first;
                        //cout<<"{"<<l<<","<<k<<"} ";
                        l++;
                        it->second -= 1;
                    }
                }
                //cout<<"*"<<i<<" "<<j<<"*";
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<=k; j++)
              cout<<arr[i][j]<<" ";
            for(j = k-1; j>=0; j--)
              cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
   }
return 0;
}
