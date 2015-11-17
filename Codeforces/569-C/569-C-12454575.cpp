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

int pc[12*MAX];
bool prime[12*MAX];
int pdc[12*MAX];
bool pal[12*MAX];

void init()
{
    memset(prime,true,sizeof(prime));
    ll i,j;
    fin(i,2,3200)
        if(prime[i])
        {
            for(j=i*i;j<=1200000;j+=i)
                prime[j] = false;
        }
    pc[1] = 0;
    fin(i,2,1200000)
    {
        pc[i] = pc[i-1];
        if(prime[i])
            pc[i]++;
    }
    return;
}

void init2()
{
    ll i;
    pdc[1]=1;
    fin(i,2,1200000)
    {
        pdc[i] = pdc[i-1];
        ll k=0,p = i;
        while(p)
        {
            k = k*10 + p%10;
            p/=10;
        }

        if(k==i)
            pdc[i]++;
    }
    return;
}

int main()
{
    int p,q;
    init();
    init2();
    ll i=1200000;
    sd(p);
    sd(q);
    while( q*pc[i] > p*pdc[i])
        i--;
    plld(i);
    return 0;
}