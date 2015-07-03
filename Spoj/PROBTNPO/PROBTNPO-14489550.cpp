#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 10000000
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n-1;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair;
#define pb push_back;

map<ll,ll> dp;
ll solve(ll n)
{	
	if(dp[n])
		return dp[n];
	if(n&1)
	{
		return dp[n] = 1 + solve(3*n + 1);
	}
	else
	{
		return dp[n] = 1 + solve(n/2);
	}
}

int main()
{	
	ll i,j,temp;
	ll x,y;
	dp[1] = 1;
	while(scanf("%lld %lld",&i,&j)!=EOF)
	{
		x = i;
		y = j;
		if(i>j)
			swap(i,j);
		ll res = 0;
		for(ll p = i;p<=j;p++)
		{
			temp = solve(p);
			res = res>temp?res:temp;
		}
		printf("%lld %lld %lld\n",x,y,res);
	}
	return 0;
}