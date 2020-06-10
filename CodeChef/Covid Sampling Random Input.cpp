#include <bits/stdc++.h> 
using namespace std; 
int ask(int r1, int r2, int c1, int c2)
{
    cout<<1<<" "<<r1<<" "<<c1<<" "<<r2<<" "<<c2;
    int x;
    cin>>x;
    return x;
}
int main()
{   
    cout.flush();
    int t;
    cin>>t;
    while(t--)
    {
        int n, p;
        cin>>n>>p;
        int arr[n][n];
        memset(arr,0,sizeof(arr)*n*n);
        int count = ask(1, 1, n, n);
        for(int i=1;(i<=n && count > 0);i++)
        {
            for(int j=1;(j<=n && count > 0); j++)
            {
                int x = ask(i, j, i, j);
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
