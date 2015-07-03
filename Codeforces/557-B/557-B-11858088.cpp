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
    int n,i;
    ll w;
    sd(n);
    slld(w);
    ll a[2*n];
    fin(i,0,2*n-1)
        slld(a[i]);
    sort(a,a+2*n);
    double res;
    if(a[0] >= a[n]/2.0)
    {
        res = 3 * a[n] / 2.0;
    }
    else
    {
        res = 3 * a[0];
    }
    res *= n;
    if(res > w)
    {
        res = w;
    }

    printf("%lf",res);
    return 0;
}