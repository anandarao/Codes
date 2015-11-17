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

int main()
{
    int t;
    sd(t);
    while(t--)
    {
        double a,th,tm,t;
        scanf(" %lf",&a);
        int i,j;
        fin(i,0,11)
        {
            fin(j,0,59)
            {
                th = i*30 + j*.5;
                tm = j*6;
                t = abs(tm-th);
                if(t>180)
                    t=360 - t;
                if(fabs(t-a)<=1/120.0)
                {
                    if(i<10)
                        pd(0);
                    pd(i);
                    printf(":");
                    if(j<10)
                        pd(0);
                    pd(j);
                    pn;
                }
            }
        }
    }
    return 0;
}
