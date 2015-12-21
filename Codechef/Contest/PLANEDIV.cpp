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
#define gc getchar_unlocked

map<pair<ll,ll> , int> ms;
map<pair<ll,pair<ll,ll> > , int> mpp;

int main()
{
    int t,n;
    ll a,b,c;
    sd(t);
    while(t--)
    {
        sd(n);
        ms.clear();
        mpp.clear();
        int res = 0;
        while(n--)
        {
            slld(a);
            slld(b);
            slld(c);
            ll gab = __gcd(a,b);
            ll gabc = __gcd(c,gab);
            if( !mpp[ mp(a/gabc,mp(b/gabc,c/gabc))] && !mpp[ mp(-a/gabc,mp(-b/gabc,-c/gabc))] )
            {
                mpp[mp(a/gabc,mp(b/gabc,c/gabc))] = mpp[ mp(-a/gabc,mp(-b/gabc,-c/gabc))] = 1;
                ms[mp(a/gab,b/gab)]++;
                ms[mp(-a/gab,-b/gab)]++;
                res = max(res,ms[mp(a/gab,b/gab)]);
            }
        }
        pd(res);
        pn;
    }
    return 0;
}
