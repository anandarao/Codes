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
	ll t,e,f;
	slld(t);
	while(t--)
	{
		slld(e);
		slld(f);
		ll x = f - e;
		ll n;
		slld(n);
		ll v[n],w[n];
		fin(0,n-1)
		{
			slld(v[i]);
			slld(w[i]);
		}
		ll res[x+1];
		res[0] = 0;
		fin(1,x)
		{
			res[i] = MAX;
			fjn(0,n-1)
			{
				if(w[j] <= i)
				{
					res[i] = min(res[i],v[j] + res[i - w[j]]);
				}
			}
		}

		if(res[x] == MAX)
			printf("This is impossible.\n");
		else
			printf("The minimum amount of money in the piggy-bank is %lld.\n",res[x]);
	}
	return 0;
}