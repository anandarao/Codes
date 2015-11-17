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
    ll n,m,mid,res,mid1,mid2;
    slld(n);
    slld(m);
    if(n==1)
        res = 1;
    else if(n&1)
    {
        mid = n/2 + 1;
        if(m == mid)
        {
            res = mid - 1;
        }
        else if(m > mid)
        {
            res = m - 1;
        }
        else
        {
            res = m + 1;
        }
    }
    else
    {
        mid1 = n/2;
        mid2 = n/2 + 1;
        if(m == mid1)
            res = mid2;
        else if(m == mid2)
            res = mid1;
        else if(m>mid2)
        {
            res = m-1;
        }
        else if(m<mid1)
        {
            res = m+1;
        }
    }
    plld(res);
    return 0;
}