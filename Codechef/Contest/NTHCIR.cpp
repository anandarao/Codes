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

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

map<ll,ll> c;

int main()
{
    ll p,mod,b,t,n,i;
    l double sum = 0,r1,r2,r3,r4;
    slld(t);
    slld(n);
    slld(p);
    slld(mod);
    slld(b);
    sllf(r1);
    sllf(r2);
    sllf(r3);
    sllf(r4);

    l double k1,k2,k3,k4,kn,rn;
    k1 = -1/r1;
    k2 = 1/r2;
    k3 = 1/r3;
    k4 = 1/r4;

    p %= mod;
    fin(i,1,t)
    {
        n = (p*n)%mod + b;
        switch(n)
        {
            case 1: sum += r1;
            break;
            case 2: sum += r2;
            break;
            case 3: sum += r3;
            break;
            case 4: sum += r4;
            break;
            default:
                kn = (n-3)*(n-4)*(k1+k2) - (n-4)*k3 + (n-3)*k4;
                rn = 1/kn;
                sum += rn;
        }
    }

   	pllf(sum);
    return 0;
}
