#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 2010
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
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
	char a[4];
	while(1)
	{
		scanf(" %s",a);
		ll num = (a[0]-'0') * 10 + a[1] - '0';
		num = num * (ll)pow(10,a[3]-'0');
		if(num==0)
			break;
		ll term = 1;
		while(num>=term)
		{
			term *= 2;
		}
		term /= 2;
		num -= term;
		printf("%lld\n",2*num + 1);
	}
	return 0;
}