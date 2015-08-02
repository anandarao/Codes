#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

int main()
{
    int n;
    sd(n);
    while(n--)
    {
        ll a;
        slld(a);
        if(a%5!=0)
            plld(a);
        else
        {
            int cnt5 = 0,cnt2=0;
            ll b = a;
            while(b%5==0)
            {
                b/=5;
                cnt5++;
            }
            while(b%2==0)
            {
                b/=2;
                cnt2++;
            }
            cnt5 -= cnt2;
            if(cnt5 > 0)
            {
                cnt5 = ceil(cnt5/2.0);
            }
            while(cnt5>0)
            {
                a *= 4;
                cnt5--;
            }
            plld(a);
        }
        pn;
    }
    return 0;
}
