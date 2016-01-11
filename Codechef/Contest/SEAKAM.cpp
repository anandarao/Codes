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

ll fact[MAX];

int a[MAX];

int root(int i)
{
    while(a[i]!=i)
    {
        i = a[i];
    }
    return i;
}

void init()
{
    ll i;
    fact[0] = 1;
    fin(i,1,100000)
        {
            fact[i] = fact[i-1]*i;
            if(fact[i]>=MOD)
                fact[i]%=MOD;
        }
    return;
}

int main()
{
    init();
    int t,n,m,i,j;
    sd(t);
    pair<int,int> p[7];
    map<int,int> c;
    while(t--)
    {
        sd(n);
        sd(m);
        ll res = 0;
        fin(i,0,m-1)
            {
                sd(p[i].first);
                sd(p[i].second);
            }
        ll ce = (1<<m) - 1;
        fin(i,0,ce)
        {
            int disc = 0,f = 0,cs=0;
            bool flag = true;
            fin(j,1,n)
                a[j] = j;
            c.clear();
            fin(j,0,m-1)
            {
                if((1<<j)&i)
                {
                    f++;
                    c[p[j].first]++;
                    c[p[j].second]++;
                    int ra = root(p[j].first);
                    int rb = root(p[j].second);
                    //pd(ra),pd(rb),pd(p[j].first),pd(p[j].second);
                    //pn;
                    if(ra == rb)
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        a[ra] = rb;
                        if(c[p[j].first]>=3 || c[p[j].second]>=3)
                        {
                            flag = false;
                            break;
                        }
                        else if(c[p[j].first]==1 && c[p[j].second]==1)
                        {
                            disc++;
                            cs += 2;
                        }
                        else if(c[p[j].first]==2 && c[p[j].second]==2)
                        {
                            disc--;
                        }
                        else
                        {
                            cs ++;
                        }
                    }
                }
            }
            if(flag)
            {
                ll p = 1<<disc;
                if(f&1)
                {
                    res = (res - p*fact[n-cs+disc]%MOD + MOD)%MOD;
                }
                else
                {
                    res = (res + p*fact[n-cs+disc])%MOD;
                }
            }
        }
        plld(res);
        pn;
    }
    return 0;
}
