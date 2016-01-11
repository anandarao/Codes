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

bool isprime[10005];
int primes[10005],a[10005];
int pc;

void init()
{
    memset(isprime,true,sizeof(isprime));
    int i,j;
    pc = 0;
    fin(i,2,100)
        if(isprime[i])
            for(j=i*i;j<=10000;j+=i)
                isprime[j] = false;

    fin(i,2,10000)
    {
        if(isprime[i])
            primes[pc++] = i;
    }
    return;
}
int main()
{
    int t,n,i,j;
    init();
    sd(t);
    while(t--)
    {
        sd(n);
        fin(i,1,n)
        {
            sd(a[i]);
        }
        int res = INT_MAX,cv,prev,r;
        fin(i,0,pc-1)
        {
            cv = 0;
            fin(j,1,n)
            {
                if(j==1)
                {
                    r = a[1]%primes[i];
                    prev = a[1] + (r==0?0:(primes[i]-r));
                    cv += prev - a[1];
                }
                else
                {
                    if(a[j]<=prev)
                    {
                        cv += prev - a[j];
                    }
                    else
                    {
                        r = a[j]%primes[i];
                        prev = a[j] + (r==0?0:(primes[i]-r));
                        cv += prev - a[j];
                    }
                }
                if(cv>res)
                    break;
            }
            res = min(cv,res);
        }
        pd(res);
        pn;
    }
    return 0;
}
