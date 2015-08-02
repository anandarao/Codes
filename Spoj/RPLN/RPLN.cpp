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

vector<ll> st;
ll a[MAX];

ll query(int ss,int se,int qs,int qe,int si)
{
    if(ss > qe || se < qs)
        return MOD;

    if(ss>=qs && se<=qe)
        return st[si];

    int mid = ss + (se-ss)/2;

    return min(query(ss,mid,qs,qe,2*si+1),query(mid+1,se,qs,qe,2*si+2));
}

ll construct(int ss,int se,int si)
{
    if(ss==se)
    {
        st[si] = a[ss];
        return a[ss];
    }

    int mid = ss + (se-ss)/2;

    st[si] = min(construct(ss,mid,2*si+1),construct(mid+1,se,2*si+2));

    return st[si];
}
int main()
{
    int t,n,q,i,l,r,j;
    sd(t);
    fin(j,1,t)
    {
        sd(n);
        sd(q);
        fin(i,0,n-1)
            slld(a[i]);
        fin(i,0,2*n)
            st.push_back(0);
        construct(0,n-1,0);
        printf("Scenario #%d:\n",j);
        while(q--)
        {
            sd(l);
            sd(r);
            ll res = query(0,n-1,l-1,r-1,0);
            plld(res);
            pn;
        }
        st.clear();
    }
    return 0;
}
