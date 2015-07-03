#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100005
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
	ll a,b,c,res;
	scanf("%lld %lld %lld",&a,&b,&c);
	while(a!=0 || b!=0 || c!=0)
	{
		if (b*b == a*c)
		{
			res = c * c / b;
			printf("GP %lld\n",res);
		}
		else
		{
			res = 2*c - b;
			printf("AP %lld\n",res);
		}
		scanf("%lld %lld %lld",&a,&b,&c);
	}
	return 0;
}