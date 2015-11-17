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

int cnt[10*MAX],a[3*MAX];
ll res[3*MAX],ans;
int sqrtn;

struct node{
    int left;
    int right;
    int i;
}q[3*MAX];

bool cmp(node x,node y)
{
    if(x.left/sqrtn != y.left/sqrtn)
        return x.left < y.left;
    else
        return x.right < y.right;
}

void add(int i)
{
    ans += (2*cnt[a[i]] + 1) * a[i];
    cnt[a[i]]++; 
}

void del(int i)
{
    ans += (1 - 2*cnt[a[i]]) * a[i];
    cnt[a[i]]--;
}

int main()
{
    int n,i,m;
    sd(n);
    sd(m);
    fin(i,0,n-1)
        sd(a[i]);
    sqrtn = sqrt(n);
    ans = 0;
    memset(cnt,0,sizeof(cnt));
    fin(i,0,m-1)
    {
        sd(q[i].left);
        sd(q[i].right);
        q[i].left--;
        q[i].right--;
        q[i].i = i;
    }
    sort(q,q+m,cmp);
    int cl=0,cr=0;
    add(0);
    fin(i,0,m-1)
    {
        while(cl<q[i].left)
        {
            del(cl);
            cl++;
        }

        while(cl>q[i].left)
        {
            cl--;
            add(cl);
        }

        while(cr<q[i].right)
        {
            cr++;
            add(cr);
        }

        while(cr>q[i].right)
        {
            del(cr);
            cr--;
        }
        res[q[i].i] = ans;
    }
    fin(i,0,m-1)
        plld(res[i]),pn;
    return 0;
}