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
	float x;
	while(1)
	{
		scanf("%f",&x);
		if(x==0)
			break;
		float res=0;
		ll i;
		for(i=2;res<x;i++)
			res += float(1.0/i);
		printf("%lld card(s)\n",i-2);
	}
	return 0;
}