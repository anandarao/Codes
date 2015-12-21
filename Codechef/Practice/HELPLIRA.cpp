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
    int n,i;
    sd(n);
    int x1,x2,x3,y1,y2,y3,ma,mi,mai,mii,a;
    ma = 0;
    mi = INT_MAX;
    fin(i,1,n)
    {
        sd(x1);
        sd(y1);
        sd(x2);
        sd(y2);
        sd(x3);
        sd(y3);
        a = abs(x1 * (y3 - y2) + x2 * (y1 - y3) + x3 * (y2 - y1));
        if(a>=ma)
        {
            ma = a;
            mai = i;
        }
        if(a<=mi)
        {
            mi = a;
            mii = i;
        }
    }
    pd(mii);
    ps;
    pd(mai);
    return 0;
}
