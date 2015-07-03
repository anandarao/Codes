#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 100006
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

bool comp(ll i,ll j)
{
	return i>j;
}

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		ll m,n;
		ll x[1003],y[1003];
		slld(m);
		slld(n);
		fin(1,m-1)
			slld(x[i]);
		fin(1,n-1)
			slld(y[i]);
		ll res = 0;
		ll i=1,j=1;
		ll row=1,col=1;
		sort(x+1,x+m,comp);
		sort(y+1,y+n,comp);
		while(i<m && j<n)
		{
			if(x[i]>y[j])
			{
				res += row*x[i];
				i++;
				col++;
			}
			else
			{
				res += col*y[j];
				j++;
				row++;
			}
		}
		while(i<m)
		{
			res += row*x[i];
			i++;
		}
		while(j<n)
		{
			res += col*y[j];
			j++;
		}
		plld(res);
		pn;
	}
	return 0;
}