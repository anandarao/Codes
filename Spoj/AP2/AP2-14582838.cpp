#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 314160
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

int main()
{
    int t;
    sd(t);
    while(t--)
    {
        ll x,y,z;
        slld(x);
        slld(y);
        slld(z);
        ll n = (2 * z) /(x+y);
        ll d = (y-x) / (n-5);
        ll a = x - 2 * d;
        ll i;
        plld(n);
        pn;
        fin(i,1,n)
            {
                plld(a+(i-1)*d);
                ps;
            }
            pn;
    }
    return 0;
}
