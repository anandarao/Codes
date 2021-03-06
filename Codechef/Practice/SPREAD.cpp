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

ll tree[10*MAX];

void update(int i,int n,ll val)
{
    while(i<=n)
    {
        tree[i] += val;
        i += (i & -i);
    }
    return;
}

ll query(int i)
{
    ll sum = 0;
    while(i)
    {
        sum += tree[i];
        i -= (i & -i);
    }

    return sum;
}

int main()
{
    int n,m,u,v,i;
    ll c,k;
    char ch;
    sd(n);
    sd(m);
    slld(c);
    update(1,n,c);
    while(m--)
    {
        scanf(" %c",&ch);
        if(ch=='S')
        {
            sd(u);
            sd(v);
            slld(k);
            update(u,n,k);
            update(v+1,n,-k);
        }
        else if(ch=='Q')
        {
            sd(u);
            plld(query(u));
            pn;
        }
    }
    return 0;
}
