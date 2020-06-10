#include <bits/stdc++.h> 
using namespace std; 
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n, p;
        cin>>n>>p;
        int arr[n][n];
        memset(arr,0,sizeof(arr)*n*n);
        cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<n;
        cout.flush();
        int count;
        cin>>count;
        for(int i=1;(i<=n && count > 0);i++)
        {
            for(int j=1;(j<=n && count > 0); j++)
            {
                cout<<1<<" "<<i<<" "<<j<<" "<<i<<" "<<j;
                cout.flush();
                int x;
                cin>>x;
                if(x == 1)
                {
                    count--;
                    arr[i-1][j-1] = 1;
                }
            }
        }
        cout<<2<<endl;
        for(int i=0; i<n;i++)
        {
            for(int j=0;j<n;j++)
              cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        int x;
        cin>>x;
        if(x == -1)
           break;
    }
    
return 0;
}
