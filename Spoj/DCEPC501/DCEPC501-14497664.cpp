#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100010
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n;i>=a;i--)

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

ll dp[MAX];
ll a[MAX];

int main()
{	
	int t;
	sd(t);
	while(t--)
	{
		ll n;
		slld(n);
		fin(0,n-1)
			slld(a[i]);
		dp[n]=dp[n+1]=dp[n+2]=dp[n+3]=0;
		fde(0,n-1)
		{
			dp[i] = a[i] + dp[i+2];
			if(i<n-1)
				dp[i] = max(dp[i],a[i]+a[i+1]+dp[i+4]);
			if(i<n-2)
				dp[i] = max(dp[i],a[i]+a[i+1]+a[i+2]+dp[i+6]);
		}
		printf("%lld\n",dp[0]);
	}
	return 0;
}