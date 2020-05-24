/* https://www.codechef.com/viewsolution/33315230 */
#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        int count = 0;
        for(int i=1; i<=(n-2)/2; i++)
        {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i, i);
            if(s1 == s2)
            {
            int rem = n - 2*i;
            rem /= 2;
            string s3 = s.substr(2*i, rem);
            rem += 2*i;
            string s4 = s.substr(rem);
            if(s3 == s4)
             {  count++;
                //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<"--";
             }
            }
        }
        cout<<count<<endl;
    }
    
return 0;
}

