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

ll a[MAX];

int main()
{
    int n,i,t;
    sd(t);
    while(t--)
    {
        sd(n);
        fin(i,0,n-1)
        {
            slld(a[i]);
        }
        ll c = 1,res = 0;
        fin(i,1,n-1)
        {
            if(a[i]>=a[i-1])
            {
                c++;
            }
            else
            {
                res += (c*(c+1))/2;
                c = 1;
            }
        }
        res += (c*(c+1))/2;
        plld(res);
        pn;
    }
    return 0;
}
