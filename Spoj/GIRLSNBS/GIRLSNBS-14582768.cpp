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
    int g,b;
    while(1)
    {
        sd(g);
        sd(b);
        if(g==-1 && b==-1)
            break;
        int res = (g+b)/(min(g,b)+1);
        pd(res);
        pn;
    }
    return 0;
}
