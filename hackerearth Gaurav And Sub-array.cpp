#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define o 100005
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define mem(a,b) memset(a,(b),sizeof(a))
#define lpo(a) for(ll i=0;i<a;i++)
#define loop(a,x) for(ll i=a;i<x;i++)
#define srt(x) sort(x.begin(),x.end())
#define all(x) x.begin(),x.end()
const ll MAX=1000000000000000001;
typedef pair<ll,ll> pii;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,q;
	cin>>n>>q;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		a[i]=__builtin_popcount(x);
	}
	ll dp[n+1];
	dp[0]=0;
	for(ll i=1;i<=n;i++)
	{
		dp[i]=dp[i-1]+a[i-1];
	}
	while(q--)
	{
		ll k;
		cin>>k;
		if(k==0)
			{cout<<1<<endl;continue;}
		ll ans=MOD;
		for(ll i=1;i<=n;i++)
		{
			ll val=k+dp[i-1];
			if(val>dp[n])
			continue;
			ll cnt=lower_bound(dp,dp+n+1,val)-dp;
			ans=min(ans,cnt-i+1);
		}
		if(ans==MOD)
			cout<<-1<<endl;
		else
		cout<<ans<<endl;
	}
}
