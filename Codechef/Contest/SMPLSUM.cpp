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
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

vector<int> primes;
bool isPrime[10000001];
ll memo[10000001];

ll solve(int n)
{
    ll res = 1,i,j,k;

    for(i=0;i<primes.size()&&primes[i]<=n;i++)
    {
        if(n%primes[i]==0)
        {
            j = 1;
            k = (ll)primes[i];
            while(n%k==0)
            {
                j *= k*k;
                n /= k;
            }
            res = res * ((j*k+1)/(k+1));

            if(isPrime[n])
                {
                    res = res * ((ll)n*(ll)n - (ll)n + 1);
                    return res;
                }
        }
    }

    if(n>1)
    {
        res = res * ((ll)n*(ll)n - (ll)n + 1);
    }

    return res;
}

int main()
{
    int i,j,t,n;
    ll res;
    for(i=1;i<=10000000;i++)
        isPrime[i] = true , memo[i] = -1;
    for(i=2;i<=3162;i++)
        if(isPrime[i])
        {
            primes.pb(i);
            for(j=i*i;j<=10000000;j+=i)
                isPrime[j] = false;
        }
    scanint(t);
    while(t--)
    {
        scanint(n);
        if(memo[n]==-1)
            {
                if(isPrime[n])
                    memo[n] = res = (ll)n*(ll)n - (ll)n + 1;
                else
                    memo[n] = res = solve(n);
            }
        else
            res = memo[n];
        printf("%lld\n",res);
    }
    return 0;
}
