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

vector<ll> st,lza,lzm;
ll a[MAX];

ll mod(ll a)
{
    if(a>=MOD)
        a%=MOD;
    return a;
}

ll sum(ll ss,ll se,ll qs,ll qe,ll si)
{
    ll mid = ss + (se-ss)/2;

    if(ss > se || ss > qe || se < qs)
		return 0;
    if(lza[si]!=0 || lzm[si]!=1)
    {
        st[si] = mod(st[si]*lzm[si] + (se-ss+1)*lza[si]);
        if(ss != se)
        {
            lzm[si*2+1] = mod(lzm[si*2+1]*lzm[si]);
            lzm[si*2+2] = mod(lzm[si*2+2]*lzm[si]);
            lza[si*2+1] = mod(lza[si*2+1]*lzm[si]);
            lza[si*2+2] = mod(lza[si*2+2]*lzm[si]);
            lza[si*2+1] = mod(lza[si*2+1]+lza[si]);
            lza[si*2+2] = mod(lza[si*2+2]+lza[si]);
        }
        lzm[si] = 1;
        lza[si] = 0;
    }

    if (qs <= ss && qe >= se)
        return st[si]=mod(st[si]);

    return mod(sum(ss, mid, qs, qe, 2*si+1) + sum(mid+1, se, qs, qe, 2*si+2));
}

void update(ll ss, ll se, ll qs, ll qe, ll d,ll si,ll flag)
{
    ll mid = ss + (se-ss)/2;

    if(lza[si]!=0 || lzm[si]!=1)
    {
        st[si] = mod(st[si]*lzm[si] + (se-ss+1)*lza[si]);
        if(ss != se)
        {
            lzm[si*2+1] = mod(lzm[si*2+1]*lzm[si]);
            lzm[si*2+2] = mod(lzm[si*2+2]*lzm[si]);
            lza[si*2+1] = mod(lza[si*2+1]*lzm[si]);
            lza[si*2+2] = mod(lza[si*2+2]*lzm[si]);
            lza[si*2+1] = mod(lza[si*2+1]+lza[si]);
            lza[si*2+2] = mod(lza[si*2+2]+lza[si]);
        }
        lzm[si] = 1;
        lza[si] = 0;
    }

    if(ss > se || ss > qe || se < qs)
		return;

    if(ss >= qs && se <= qe)
    {
        switch(flag)
        {
            case 1:
                st[si] = mod(st[si]+(se-ss+1)*d);
                break;
            case 2:
                st[si] = mod(st[si]*d);
                break;
            case 3:
                st[si] = mod((se-ss+1)*d);
        }

        if(ss != se)
        {
            switch(flag)
            {
                case 1:
                    lza[si*2+1] = mod(lza[si*2+1]+d);
                    lza[si*2+2] = mod(lza[si*2+2]+d);
                    break;
                case 2:
                    lzm[si*2+1] = mod(lzm[si*2+1]*d);
                    lzm[si*2+2] = mod(lzm[si*2+2]*d);
                    lza[si*2+1] = mod(lza[si*2+1]*d);
                    lza[si*2+2] = mod(lza[si*2+2]*d);
                    break;
                case 3:
                    lza[si*2+1] = d;
                    lza[si*2+2] = d;
                    lzm[si*2+1] = 0;
                    lzm[si*2+2] = 0;
            }
        }
        return;
    }

	update(ss, mid, qs, qe, d,2*si+1,flag);
	update(mid+1, se, qs, qe, d,2*si+2,flag);

	st[si] = mod(st[2*si+1]+st[2*si+2]);
    return;
}

ll construct(ll ss,ll se,ll si)
{
    if(ss==se)
    {
        st[si] = a[ss];
        return a[ss];
    }

    ll mid = ss + (se-ss)/2;
    st[si] = mod(construct(ss,mid,2*si+1) + construct(mid+1,se,2*si+2));
    return st[si];
}

int main()
{
    ll n,q,i,ch,x,y;
    ll s,v;
    slld(n);
    slld(q);
    fin(i,0,n-1)
        slld(a[i]);
    fin(i,0,4*n+5)
        {
            st.pb((ll)0);
            lza.pb((ll)0);
            lzm.pb((ll)1);
        }
    construct(0,n-1,0);
    while(q--)
    {
        slld(ch);
        if(ch==4)
        {
            slld(x);
            slld(y);
            s = mod(sum((ll)0,n-1,x-1,y-1,(ll)0));
            plld(s);
            pn;
        }
        else
        {
            slld(x);
            slld(y);
            slld(v);
            update((ll)0,n-1,x-1,y-1,v,(ll)0,ch);
        }
    }
    return 0;
}
