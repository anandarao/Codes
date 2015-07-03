#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100005
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
	int t;
	sd(t);
	while(t--)
	{
		int n,m;
		sd(n);
		sd(m);
		int a[n],b[m];
		fint(0,n-1)
			slld(a[i]);
		fin(0,m-1)
			slld(b[i]);
		sort(a,a+n);
		sort(b,b+m);
		int i=0,j=0;
		while(1)
		{
			if(a[i]<b[j])
			{
				i++;
				if(i==n)
				{
					printf("MechaGodzilla\n");
					break;
				}
			}
			else
			{
				j++;
				if(j==m)
				{
					printf("Godzilla\n");
					break;
				}
			}
		}
	}
	return 0;
}