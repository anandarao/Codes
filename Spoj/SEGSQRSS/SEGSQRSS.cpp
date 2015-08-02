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

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

typedef pair<ll,ll> p;
vector<p> st;
vector<ll> lza,lzi;
ll a[MAX];

ll sum(int ss,int se,int qs,int qe,int si)
{
    int mid = ss + (se-ss)/2;
    if(lzi[si]==1)
    {
        st[si].first = ((se-ss+1)*lza[si])%MOD;
        st[si].second = ((se-ss+1)*lza[si]*lza[si])%MOD;
        if(ss != se)
        {
            lza[si*2+1] = lza[si];
            lza[si*2+2] = lza[si];
            lzi[si*2+1] = 1;
            lzi[si*2+2] = 1;
        }
        lzi[si] = 0;
        lza[si] = 0;
    }
    else
    {
        st[si].second = (st[si].second + 2*(st[si].first)*lza[si] + (se-ss+1)*lza[si]*lza[si])%MOD;
        st[si].first = (st[si].first + (se-ss+1)*lza[si])%MOD;
        if(ss != se)
        {
            lza[si*2+1] += lza[si];
            lza[si*2+2] += lza[si];
        }
        lza[si] = 0;
    }

    if(ss > se || ss > qe || se < qs)
		return 0;

    if (qs <= ss && qe >= se)
        return st[si].second;

    return (sum(ss, mid, qs, qe, 2*si+1) + sum(mid+1, se, qs, qe, 2*si+2))%MOD;
}

void update(int ss, int se, int qs, int qe, ll d,int si,int flag)
{
    int mid = ss + (se-ss)/2;
    if(lzi[si]==1)
    {
        st[si].first = ((se-ss+1)*lza[si])%MOD;
        st[si].second = ((se-ss+1)*lza[si]*lza[si])%MOD;
        if(ss != se)
        {
            lza[si*2+1] = lza[si];
            lza[si*2+2] = lza[si];
            lzi[si*2+1] = 1;
            lzi[si*2+2] = 1;
        }
        lzi[si] = 0;
        lza[si] = 0;
    }
    else
    {
        st[si].second = (st[si].second + 2*(st[si].first)*lza[si] + (se-ss+1)*lza[si]*lza[si])%MOD;
        st[si].first = (st[si].first + (se-ss+1)*lza[si])%MOD;
        if(ss != se)
        {
            lza[si*2+1] += lza[si];
            lza[si*2+2] += lza[si];
        }
        lza[si] = 0;
    }

    if(ss > se || ss > qe || se < qs)
		return;

    if(ss >= qs && se <= qe)
    {
        switch(flag)
        {
            case 1:
                st[si].second = (st[si].second + 2*(st[si].first)*d + (se-ss+1)*d*d)%MOD;
                st[si].first = (st[si].first + (se-ss+1)*d)%MOD;
                break;
            case 0:
                st[si].first = ((se-ss+1)*d)%MOD;
                st[si].second = ((se-ss+1)*d*d)%MOD;
        }

        if(ss != se)
        {
            switch(flag)
            {
                case 1:
                    lza[si*2+1] += d;
                    lza[si*2+2] += d;
                    break;
                case 0:
                    lzi[si*2+1] = 1;
                    lzi[si*2+2] = 1;
                    lza[si*2+1] = d;
                    lza[si*2+2] = d;
            }
        }
        return;
    }

	update(ss, mid, qs, qe, d,2*si+1,flag);
	update(mid+1, se, qs, qe, d,2*si+2,flag);

	st[si].first = (st[2*si+1].first+st[2*si+2].first)%MOD;
	st[si].second = (st[2*si+1].second+st[2*si+2].second)%MOD;
}

p construct(int ss,int se,int si)
{
    if(ss==se)
    {
        st[si].first = a[ss];
        st[si].second = (a[ss]*a[ss])%MOD;
        return st[si];
    }
    p p1,p2;
    int mid = ss + (se-ss)/2;
    p1 = construct(ss,mid,2*si+1);
    p2 = construct(mid+1,se,2*si+2);
    st[si].first = (p1.first + p2.first)%MOD;
    st[si].second = (p1.second + p2.second)%MOD;
    return st[si];
}

int main()
{
    int t,j;
    sd(t);
    fin(j,1,t)
    {
        printf("Case %d:\n",j);
    int n,q,i,ch,x,y;
    ll s,v;
    sd(n);
    sd(q);
    fin(i,0,n-1)
        slld(a[i]);
    fin(i,0,2*n)
        {
            st.pb(mp(0,0));
            lza.pb(0);
            lzi.pb(0);
        }
    construct(0,n-1,0);
    while(q--)
    {
        sd(ch);
        switch(ch)
        {
            case 1:
                sd(x);
                sd(y);
                slld(v);
                update(0,n-1,x-1,y-1,v,0,1);
                break;
            case 0:
                sd(x);
                sd(y);
                slld(v);
                update(0,n-1,x-1,y-1,v,0,0);
                break;
            case 2:
                sd(x);
                sd(y);
                s = sum(0,n-1,x-1,y-1,0);
                if(s>=MOD)
                    s%=MOD;
                plld(s);
                pn;
        }
    }
    }
    return 0;
}
