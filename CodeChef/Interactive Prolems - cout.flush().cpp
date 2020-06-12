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
        vector<vector<int> > arr(n, vector<int>(n,0));
        int count;
        cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<n<<endl;
        cin>>count;
        int tem = count;
        int col[n] = {0};
        for(int i=0;(i<(n-1) && tem > 0);i++)
        {
            cout<<1<<" "<<1<<" "<<i+1<<" "<<n<<" "<<i+1<<endl;
            cin>>col[i];
            tem -= col[i];
        }
        col[n-1] = tem;
        for(int i=0;(i<(n-1) && count > 0);i++)
        {   
            cout<<1<<" "<<i+1<<" "<<1<<" "<<i+1<<" "<<n<<endl;
            int t;
            cin>>t;
            for(int j=0;(j<n && t>0); j++)
            {   
                if(col[j] > 0)
                {
                    cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
                    int temp;
                    cin>>temp;
                    if(temp == 1)
                    {   
                        t--;
                        count--;
                        col[j]--;
                        arr[i][j] = 1;
                    }
                }
            }
        }
        for(int j=0; j<n ; j++)
            {   
                 arr[n-1][j] = col[j];
            }
        cout<<2<<endl;
        for(int i=0; i<n;i++)
        {
            for(int j=0;j<n;j++)
             { 
                 cout<<arr[i][j]<<" ";
             }
            cout<<endl;
            //cout.flush();
        }
        int x;
        cin>>x;
        if(x == -1)
           exit(1);
    }
return 0;
}
