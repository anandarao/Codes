#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 10000001
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
	int n;
	ll sum;
	ll av;
	while(1)
	{
		sd(n);
		if(n==-1)
			break;
		ll a[n];
		sum = 0;
		fint(0,n-1)
			{
				slld(a[i]);
				sum+=a[i];
			}
		if(sum%n!=0)
		{
			printf("-1\n");
		}
		else
		{
			ll res = 0;
			av = sum/n;
			fint(0,n-1)
			{
				if(a[i]>av)
					res+=a[i]-av;
			}
			plld(res);
			pn;
		}
	}
	return 0;
}