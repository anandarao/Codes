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
	int t,n;
	sd(t);
	while(t--)
	{
		sd(n);
		int a[n];
		fin(0,n-1)
			sd(a[i]);
		int res = __gcd(a[0],a[1]);
		int i = 2;
		while(res!=1 && i<n)
		{
			res = __gcd(res,a[i]);
			i++;
		}
		if(res == 1)
			pd(n);
		else
			pd(-1);
		pn;
	}
	return 0;
}