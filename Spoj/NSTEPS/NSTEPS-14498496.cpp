#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 5010
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
	int x,y;
	while(t--)
	{
		sd(x);
		sd(y);
		if(y==x)
		{
			printf("%d\n",2*y - y%2);
		}
		else if(y==x-2)
		{
			printf("%d\n",2*(y+1) - y%2);
		}
		else
			printf("No Number\n");
	}
	return 0;
}