#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define l long

#define MAX 300003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

struct b{
    int val;
    char left,right;
}st[4*MAX];
char a[MAX];

/*ll query(int ss,int se,int qs,int qe,int si)
{
    if(ss > qe || se < qs)
        return 1;

    if(ss>=qs && se<=qe)
        return st[si];

    int mid = ss + (se-ss)/2;

    ll a=query(ss,mid,qs,qe,2*si+1);
    ll b=query(mid+1,se,qs,qe,2*si+2);
    ll g = __gcd(a,b);

        ll res = ((a*b)/(g*g));
        return res;
}*/

void construct(int ss,int se,int si)
{
    if(ss==se)
    {
        st[si].val = 0;
        st[si].left = a[ss];
        st[si].right = a[ss];
        return;
    }

    int mid = ss + (se-ss)/2;

    construct(ss,mid,2*si+1);
    construct(mid+1,se,2*si+2);

    st[si].val = st[2*si+1].val + st[2*si+2].val;
    st[si].left = st[2*si+1].left;
    st[si].right = st[2*si+2].right;

    if(st[2*si+1].right=='.' && st[2*si+2].left=='.')
        st[si].val++;

    return;
}

void update(int ss,int se,int i,int si,char ch)
{
    if(i<ss || i>se)
        return;

    if(ss==se)
    {
        st[si].left = st[si].right = ch;
        return;
    }

    int mid = ss + (se-ss)/2;

    update(ss,mid,i,2*si+1,ch);
    update(mid+1,se,i,2*si+2,ch);

    st[si].val = st[2*si+1].val + st[2*si+2].val;
    st[si].left = st[2*si+1].left;
    st[si].right = st[2*si+2].right;

    if(st[2*si+1].right=='.' && st[2*si+2].left=='.')
        st[si].val++;

    return ;
}

int main()
{
    int n,m,x;
    char ch;
    sd(n);
    sd(m);
    scanf("%s",a);
    construct(0,n-1,0);
    while(m--)
    {
        sd(x);
        scanf(" %c",&ch);
        x--;
        update(0,n-1,x,0,ch);
        pd(st[0].val);
        pn;
    }
    return 0;
}