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

ll a[20004];

int main()
{
    int t,m,j,i;
    ll n;
    sd(t);
    while(t--)
    {
        slld(n);
        sd(m);
        fin(i,0,m-1)
            slld(a[i]);
        sort(a,a+m);
        int i = 0,j = m-2;
        int res = 0;
        while(a[m-1]!=n && i<=j)
        {
            if(i!=j)
                a[m-1] += a[j] + 1;
            else
                a[m-1] += a[j];
            j--;
            res++;
            a[i]--;

            if(a[i]==0)
                i++;
        }



        pd(res);
        pn;
    }
    return 0;
}
