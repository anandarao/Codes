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

int L[MAX][MAX];

int lcs( int *X, int *Y, int m, int n )
{
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}

int main()
{	
	int d;
	sd(d);
	int alice[MAX],temp[MAX];
	int an,tn;
	int t;
	int res;
	int lt;
	while(d--)
	{
		an = 0;
		res=-1;
		while(1)
		{
			sd(t);
			if(t==0)
				break;
			alice[an++]=t;
		}
		while(1)
		{
			sd(t);
			tn=0;
			if(t==0)
				break;
			temp[tn++]=t;
			while(1)
			{
				sd(t);
				if(t==0)
					break;
				temp[tn++]=t;
			}
			lt = lcs(alice,temp,an,tn);
			res = res<lt?lt:res;
		}
		printf("%d\n",res);
	}
	return 0;
}