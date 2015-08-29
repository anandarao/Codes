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
    int t;
    sd(t);
    ll k;
    while(t--)
    {
        slld(k);
        pd(3);
        ll num = 103993 % 33102;
        num*=10;
        ll den = 33102;
        ll rem,quo;
        if(k)
        {
            printf(".");
            while(k--)
            {
                quo = num/den;
                rem = num%den;
                num = rem*10;
                plld(quo);
            }
        }
        pn;
    }
    return 0;
}
