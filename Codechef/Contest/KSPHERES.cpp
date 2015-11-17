#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)
#define sllf(a) scanf("%llf",&a)
#define ss(a) scanf(" %s",a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

map<ll,ll> mu,ml;
ll a[MAX];
ll res[2][1003];

int main()
{
    int n,m,c,i,ns,j;
    ll t;
    sd(n);
    sd(m);
    sd(c);
    fin(i,0,n-1)
        {
            slld(t);
            mu[t]++;
        }
    fin(i,0,m-1)
        {
            slld(t);
            ml[t]++;
        }
    map<ll,ll>::iterator it;
    i = 0;
    for(it=mu.begin();it!=mu.end();it++)
    {
        if(ml.count(it->first))
            a[i++] = (it->second * ml[it->first])%MOD;
    }
    ns = i;
    memset(res,0,sizeof(res));
    fin(i,0,ns-1)
    {
    	fin(j,0,min(i,c))
    	{
    		if(j==0)
    			res[1][j] = (res[0][j] + a[i])%MOD;
    		else
    			res[1][j] = (res[0][j] + a[i]*res[0][j-1])%MOD;
    	}
    	fin(j,0,min(i,c))
    		res[0][j] = res[1][j]%MOD;
    }
    fin(i,1,c)
    	plld(res[0][i]),ps;
    return 0;
}
