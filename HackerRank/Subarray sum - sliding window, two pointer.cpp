/*https://codeforces.com/contest/1364/problem/A */

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define pl pair<ll,ll> 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed<<setprecision(10);
using namespace std;

int main()
{
	fastIO
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, x;
		cin>>n>>x;
		ll a[n], tot = 0;
		for(ll i = 0; i < n; i++)
		{
			cin>>a[i];
			tot += a[i];
		}
		if(tot%x != 0) cout<<n<<"\n";
		else
		{
			ll temp = tot, tempmx = n, mx = 0;
			for(ll i = 0; i < n; i++)
			{
				temp -= a[i];
				--tempmx;
				if(temp%x != 0) break;
			}
			mx = max(mx, tempmx);
			tempmx = n, temp = tot;
			for(ll i = n - 1; i >= 0; i--)
			{
				temp -= a[i];
				--tempmx;
				if(temp%x != 0) break;
			}
			mx = max(mx, tempmx);
			if(!mx)cout<<"-1\n";
			else cout<<mx<<"\n";
		}
	}
	return 0;
}
