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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		ll k;
		cin>>n;
		ll a[n+1];
		cin>>k;
		for(ll i=0;i<n;i++)
		cin>>a[i];
		ll dp[n+1];
		dp[0]=0;
		for(ll i=1;i<=n;i++)
		{
			dp[i]=a[i-1]+dp[i-1];
		}
		ll cnt=0;
		sort(dp,dp+n);
		for(ll i=0;i<n;i++)
		{
			ll val=dp[i]+k;
			int x=upper_bound(dp,dp+n+1,val)-dp;
			cnt+=(n-x+1);
		}
		cout<<cnt<<endl;
	}
}
