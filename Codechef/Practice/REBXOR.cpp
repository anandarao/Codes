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

/*#define gc getchar_unlocked

void ri(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}*/

int fwd[4*MAX],bkd[4*MAX],a[4*MAX];

struct trie
{
    trie* c[2];
};

trie * create()
{
        trie * ptr = (trie *)malloc(sizeof(trie));
        ptr->c[0] = NULL;
        ptr->c[1] = NULL;
        return ptr;
}

void _insert(trie *root,int k)
{
    trie * ptr = root;
    int i,j;
    for(i=29;i>=0;i--)
    {
        j = k & (1<<i) ? 1:0;
        if(ptr->c[j]==NULL)
            ptr->c[j] =create();
        ptr = ptr->c[j];
    }
}

int _max(trie *root,int k)
{
    trie * ptr = root;
    int ans = 0,i,j;
    for(i=29;i>=0;i--)
    {
        j = k & (1<<i) ? 1:0;
        if(ptr->c[1-j]==NULL)
            ptr = ptr->c[j];
        else
        {
            ans += 1<<i;
            ptr = ptr->c[1-j];
        }
    }
    return ans;
}

int main()
{
    int n,i,k=0;
    sd(n);
    fin(i,0,n-1)
        sd(a[i]);
    trie * rootl = create();
    _insert(rootl,0);
    fin(i,0,n-1)
    {
        k ^= a[i];
        fwd[i] = _max(rootl,k);
        _insert(rootl,k);
    }
    trie * rootr = create();
    _insert(rootr,0);
    k = 0;
    bkd[n] = 0;
    int ans = -1;
    fde(i,0,n-1)
    {
        k ^= a[i];
        bkd[i] = _max(rootr,k);
        bkd[i] = max(bkd[i],bkd[i+1]);
        ans = max(ans,fwd[i]+bkd[i+1]);
        _insert(rootr,k);
    }
    pd(ans);
    return 0;
}
