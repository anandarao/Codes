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

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

pair<int,int> st[2*MAX];
char a[MAX];

void update(int ss,int se,int i,int si)
{
    if(i<ss || i>se)
        return;
    if(ss==se)
    {
        st[si].first = -st[si].first;
        st[si].second = st[si].first;
        return;
    }

    int mid = ss + (se-ss)/2;

    update(ss,mid,i,2*si+1);
    update(mid+1,se,i,2*si+2);

    st[si].first = st[2*si+1].first + st[2*si+2].first;
    st[si].second = min(st[2*si+1].second , st[2*si+1].first + st[2*si+2].second);
    return;
}

void construct(int ss,int se,int si)
{
    if(ss==se)
    {
        st[si].first = a[ss]=='('?1:-1;
        st[si].second = st[si].first;
        return;
    }

    int mid = ss + (se-ss)/2;

    construct(ss,mid,2*si+1);
    construct(mid+1,se,2*si+2);

    st[si].first = st[2*si+1].first + st[2*si+2].first;
    st[si].second = min(st[2*si+1].second , st[2*si+1].first + st[2*si+2].second);

    return;
}
int main()
{
    int n,q,i,ch,j;
    fin(i,1,10)
    {
        printf("Test %d:\n",i);
        sd(n);
        scanf(" %s",a);
        construct(0,n-1,0);
        sd(q);
        while(q--)
        {
            sd(ch);
            if(ch==0)
            {
                if(!st[0].first && !st[0].second)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
            {
                update(0,n-1,ch-1,0);
            }
        }
    }
    return 0;
}
