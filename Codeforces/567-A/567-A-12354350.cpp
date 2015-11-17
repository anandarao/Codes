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
    int n,i;
    sd(n);
    ll x[n];
    fin(i,0,n-1)
        slld(x[i]);
    fin(i,0,n-1)
    {
        if(i==0)
        {
            plld(x[1]-x[0]);
            ps;
            plld(x[n-1]-x[0]);
            pn;
        }
        else if(i==n-1)
        {
            plld(x[n-1] - x[n-2]);
            ps;
            plld(x[n-1]-x[0]);
            pn;
        }
        else
        {
            plld(min(x[i+1]-x[i],x[i]-x[i-1]));
            ps;
            plld(max(x[n-1]-x[i],x[i]-x[0]));
            pn;
        }
    }
    return 0;
}