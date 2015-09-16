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

int main()
{
    ll k,i,s;
    long double ai,bi,ans;
    slld(i);
    slld(k);
    slld(s);
    sllf(ai);
    sllf(bi);
    if((k-i)&1)
    {
        ans = pow(2,2*k-2*i-s-1)*(sqrt(2)*ai + sqrt(6)*bi);
    }
    else
    {
        ans = pow(2,2*k-2*i-s)*(ai+bi);
    }
    pllf(ans);
    return 0;
}
