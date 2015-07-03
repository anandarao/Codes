#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 1000000000
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

int main()
{
    ll n,x1,x2,y1,y2;
    slld(n);
    ll res = 0;
    while(n--)
    {
        slld(x1);
        slld(y1);
        slld(x2);
        slld(y2);
        res = res + (abs(x1-x2)+1)*(abs(y1-y2)+1);
    }
    plld(res);
    return 0;
}