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
std::vector<ll> x;
ll test[1000011];
void sieve(ll n)
{
	test[0]=test[1]=1;
	for(ll i=2;i*i<=n;i++)
		if(test[i]==0)
			for(ll j=i*i;j<=n;j+=i)
				test[j]=1;
	for(ll i=0;i<=n;i++)
		if(test[i]==0)
			x.pb(i);
}
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve(1000000);
	std::vector<int> v;
	for(ll i=0;i<x.size();i++)
 	{
 		v.pb(x[i]);
 		x[i]=x[i]*x[i]*x[i];

 	}
	ll n;
	cin>>n;
	ll a=1;      
	ll b=8;
	int size=x.size();
	for(int i=0;i<size;i++)
	{
		ll val=n-a-b-x[i];
		if(binary_search(x.begin()+i,x.end(), val))
		{
			cout<<a<<" "<<2<<" "<<v[i]<<" "<<cbrt(val);
			return 0;
		}
	}
	cout<<-1;

}
