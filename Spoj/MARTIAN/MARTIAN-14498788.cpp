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
	int n,m,temp;
	int y[MAX][MAX],b[MAX][MAX],res[MAX][MAX];
	while(1)
	{
		sd(n);
		sd(m);
		if(n==0 && m==0)
			break;
		fint(0,n-1)
			fjnt(0,m-1)
			{
				sd(temp);
				if(j==0)
				{
					y[i][j] = temp;
				}
				else
				{
					y[i][j] = temp + y[i][j-1];
				}
			}
		fint(0,n-1)
			fjnt(0,m-1)
			{
				sd(temp);
				if(i==0)
				{
					b[i][j] = temp;
				}
				else
				{
					b[i][j] = temp + b[i-1][j];
				}
			}
		fint(0,n-1)
			fjnt(0,m-1)
			{
				if(i==0 && j==0)
				{
					res[i][j] = max(b[i][j],y[i][j]);
				}
				else if(i==0)
				{
					res[i][j] = max(b[i][j]+res[i][j-1],y[i][j]);
				}
				else if(j==0)
				{
					res[i][j] = max(b[i][j],y[i][j]+res[i-1][j]);
				}
				else
				{
					res[i][j] = max(b[i][j]+res[i][j-1],y[i][j]+res[i-1][j]);
				}
			}
		printf("%d\n",res[n-1][m-1]);
	}
	return 0;
}