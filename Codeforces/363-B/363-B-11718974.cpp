#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 3010
#define MOD 10

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjnt(a,n) for(int j=a;j<=n;j++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n;i>=a;i--)

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
    ll n,k;
    slld(n);
    slld(k);
    int a[n];
    fin(0,n-1)
    {
        slld(a[i]);
    }
    ll sum=0;
    ll res;
    ll pos;
    fin(0,k-1)
    {
        sum+=a[i];
    }
    res = sum;
    pos = 1;
    fin(k,n-1)
    {
        sum += a[i] - a[i-k];
        if(sum<res)
        {
            res = sum;
            pos = i-k+2;
        }
    }
    plld(pos);
}