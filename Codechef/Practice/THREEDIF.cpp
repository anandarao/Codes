#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define l long

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

int main()
{
    int t;
    sd(t);
    while(t--)
    {
        ll a[3];
        slld(a[0]);
        slld(a[1]);
        slld(a[2]);
        sort(a,a+3);
        ll res = a[0]%MOD;
        res = (a[1]-1)%MOD * res %MOD;
        res = (a[2]-2)%MOD * res %MOD;
        res = (res+MOD)%MOD;
        plld(res);
        pn;

    }
    return 0;
}
