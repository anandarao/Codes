#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 1010
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

int main()
{	
	int t,n;
	sd(t);
	while(t--)
	{
		ll sum=0;
		sd(n);
		int a[n],b[n];
		fint(0,n-1)
			sd(a[i]);
		fint(0,n-1)
			sd(b[i]);
		sort(a,a+n);
		sort(b,b+n);
		fint(0,n-1)
			sum+= a[i]*b[i];
		plld(sum);
		pn;
	}
	return 0;
}