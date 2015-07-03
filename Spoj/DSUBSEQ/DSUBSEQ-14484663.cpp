#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 100006
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

int main()
{
	int t,n;
	sd(t);
	char a[MAX];
	ll dp[MAX];
	map<char,int> m;
	while(t--)
	{
		scanf(" %s",a);
		n = strlen(a);
		dp[0] = 1;
		for(int i=1;i<=n;i++)
		{
			dp[i] = dp[i-1] * 2;
			if(m.count(a[i-1]))
			{
				dp[i] = dp[i] - dp[m[a[i-1]]] + MOD;
			}
			dp[i]%=MOD;
			m[a[i-1]] = i-1;
		}
		plld(dp[n]);
		pn;
		m.clear();
	}
	return 0;
}