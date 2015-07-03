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
	int n;
	int i,j;
	char a[205];
	while(1)
	{
		sd(n);
		if(n==0)
			break;
		scanf(" %s",a);
		int m = strlen(a);
		int r = m/n;
		char ans[r][n];
		for(i=0;i<r;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i&1)
					ans[i][j] = a[(i+1)*n - 1 - j];
				else
					ans[i][j] = a[i*n + j];
			}	
		}
		for(j=0;j<n;j++)
			for(i=0;i<r;i++)
				printf("%c",ans[i][j]);
		pn;
	}
	return 0;
}