#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 505
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
	int t;
	sd(t);
	fint(1,t)
	{
		ll s;
		int n;
		slld(s);
		sd(n);
		ll a[n];
		fjnt(0,n-1)
			slld(a[j]);
		int j;
		sort(a,a+n);
		ll sum=0;
		for(j=n-1;j>=0;j--)
		{
			sum += a[j];
			if(sum>=s)
				break;
		}
		printf("Scenario #%d:\n",i);
		if(j>=0)
			printf("%d",n-j);
		else
			printf("impossible");
		pn;
		pn;
	}
	return 0;
}