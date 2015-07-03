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
    ll n,max1,max2,max3,min1,min2,min3;
    slld(n);
    slld(min1);
    slld(max1);
    slld(min2);
    slld(max2);
    slld(min3);
    slld(max3);
    ll res = min1+min2+min3;
    ll res1 = min1;
    ll res2 = min2;
    ll res3 = min3;
    if(res!=n)
    {
        res1 = max1;
        res = res1 + res2 + res3;
        if(res<=n)
        {
            res2 = max2;
            res = res1 + res2 + res3;
            if(res<=n)
            {
                res3 = max3;
                res = res1 + res2 + res3;
                if(res<=n)
                {
                    ;
                }
                else
                {
                    res3 = n - max1 - max2 ;
                }
            }
            else
            {
                res2 = n - max1 - min3;
            }
        }
        else
        {
            res1 = n - min2 - min3 ;
        }
    }
    plld(res1);
    ps;
    plld(res2);
    ps;
    plld(res3);
    ps;
    return 0;
}