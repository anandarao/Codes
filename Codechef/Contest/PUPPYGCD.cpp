#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 10003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)
#define sllf(a) scanf("%llf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back


int main()
{
    int t;
    ll n,d,i,j,res;
    sd(t);
    while(t--)
    {
        slld(n);
        slld(d);
        res = 0;
        for(i=d;i<=n;i+=d)
            for(j=i;j<=n;j+=d)
                if(__gcd(i,j)==d)
                    res++;
        plld(res);
        pn;
    }
    return 0;
}
