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
	int n,m;
	while(1)
	{
		sd(n);
		sd(m);
		if(n==0 && m==0)
			break;
		int a[n];
		int b[m];
		fint(0,n-1)
			sd(a[i]);
		fint(0,m-1)
			sd(b[i]);
		sort(a,a+n);
		sort(b,b+m);
		if(a[0]>=b[1])
			printf("N\n");
		else
			printf("Y\n");
	}
	return 0;
}