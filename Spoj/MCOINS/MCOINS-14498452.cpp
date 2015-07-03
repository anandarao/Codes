#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 5010
#define MOD 10

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjnt(a,n) for(int j=a;j<=n;j++)
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

int main()
{
	int k,m,n;
	sd(k);
	sd(m);
	sd(n);
	ll a[n];
	ll max=0;
	fint(0,n-1)
	{
		slld(a[i]);
		max = a[i]>max?a[i]:max;
	}
	bool dp[max+1];
	dp[0]=false;
	fin(1,max)
	{
		dp[i] = !dp[i-1];
		if(i>=k)
		{
			dp[i] = dp[i] || !dp[i-k];
		}
		if(i>=m)
		{
			dp[i] = dp[i] || !dp[i-m];
		}
	}
	fint(0,n-1)
		if(dp[a[i]])
			printf("A");
		else
			printf("B");
	return 0;
}