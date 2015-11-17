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

bool pyth[50*MAX];

void init()
{
    ll i,j,k,p;
    memset(pyth,false,sizeof(pyth));
    fin(i,1,2237)
    {
        for(j = i+1 ; i*i + j*j <= 5000000 ; j++)
            {
                k = i*i + j*j;
                for(p = k;p<=5000000;p+=k)
                    pyth[p] = true;

            }
    }
}

int main()
{
    ll t,n;
    init();
    slld(t);
    while(t--)
    {
        slld(n);
        if(pyth[n])
            printf("YES");
        else
            printf("NO");
        pn;
    }
    return 0;
}
