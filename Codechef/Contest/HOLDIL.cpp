#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)
#define sllf(a) scanf("%llf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

int main()
{
	int t;
	sd(t);
	ll s;
	while(t--)
	{
		slld(s);
		ll i,sum=0;
		ll n = ceil(pow(3.0*s,1.0/3));
		sum = (n*(n+1)*(2*n+1))/6;
		for(i=n;;i--)
		{
			if(sum<=s)
				break;
			sum -= i*i;
		}
		plld(i);
		pn;
	}
    return 0;
}
