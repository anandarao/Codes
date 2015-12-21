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
    int t;
    sd(t);
    while(t--)
    {
        int h1,h2,m1,m2;
        scanf("%d:%d",&h1,&m1);
        scanf("%d:%d",&h2,&m2);
        int d = (h1-h2)*60 + m1-m2,dis;
        sd(dis);
        float res1,res2;
        res1 = d + dis;
        if(2*dis<=d)
            res2 = d;
        else if(dis<=d)
            res2 = d + (2*dis - d)/2.0;
        else
            res2 = d + (2*dis - d)/2.0;
        printf("%0.1f %0.1f\n",res1,res2);

    }
    return 0;
}
