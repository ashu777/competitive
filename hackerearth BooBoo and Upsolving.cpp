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
	ll n;
	ll m;
	cin>>n;
	cin>>m;
	ll a[n];
	ll sum=0;
	lpo(n)
	{
		cin>>a[i];
		sum+=a[i];
	}
	ll low=*max_element(a,a+n),high=sum;
	ll mid;
	while(low<high)
	{
		mid=(low+high)/2;
		ll sum=0;
		ll cnt=1;
		ll flag=0;
		for(ll i=0;i<n;i++)
		{
			if(sum+a[i]>mid)
			{
				sum=a[i];
				cnt++;
			}
			else
			{
				sum+=a[i];
			}
		}
		if(cnt<=m)
		{
			high=mid;
		}
		else
		{
			low=mid+1;
		}
	}
	cout<<low<<endl;
}
