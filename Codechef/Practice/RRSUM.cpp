#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 1000000000
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
	ll n,m;
	slld(n);
	slld(m);
	while(m--)
	{
		ll q;
		slld(q);
		if(q <= n + 1)
			{
				pd(0);
				pn;
			}
		else
		{
			plld(1 + min(3 * n - q , q - n - 2));
			pn;
		}
	}
	return 0;
}