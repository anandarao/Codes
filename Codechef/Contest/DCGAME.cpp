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
#define sc(a) scanf(" %c",&a);

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

ll a[10*MAX],s[10*MAX],b[10*MAX];
char st[10*MAX];
unordered_map<ll,pair<ll,ll> > c;

void scanint(ll &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
    ll n,m,i,mx=-1,mn=MAX*MAX;
    scanint(n);
    scanint(m);
    fin(i,0,n-1)
        {
            scanint(a[i]);
            b[i] = a[i];
            mn = a[i]<mn?a[i]:mn;
            mx = a[i]>mx?a[i]:mx;
        }
    sort(b,b+n);
    ll top = 0;
    s[0] = -1;
    i = 0;
    ll index,k;
    while (i < n)
    {
        if (top==0 || a[s[top]] > a[i])
        {
                top++;
                s[top] = i++;
        }
        else
        {
            index = s[top];
            top--;
            k = a[index];
            c[k].first += top==0 ? (i-index)*(index+1) : (index-s[top])*(i-index);
        }
    }

    while (top!=0)
    {
        index = s[top];
        top--;
        k = a[index];
        c[k].first += top==0 ? (i-index)*(index+1) : (index-s[top])*(i-index);
    }

    ll sum = 0,sum2 = (n*(n+1))/2;
    ll j = 0,n1;
    b[n] = -1;
    for(i=1;i<=n;i++)
    {
        if(b[i]!=b[i-1])
        {
            a[j] = b[i-1];
            c[a[j]].second = sum;
            sum += c[a[j]].first;
            j++;
        }
    }
    n1 = j;
    ll q = 0;
    while(m--)
    {
        register int ch,ch1;
        ll k,res;
        ch = gc();
        for(;!(ch=='=' || ch=='<' || ch=='>');ch = gc());
        scanint(k);
        ch1 = gc();
        for(;!(ch1=='D' || ch1=='C' );ch1 = gc());
            switch(ch)
            {
                case '=':
                    if(binary_search(a,a+n1,k))
                        res = c[k].first;
                    else
                        res = 0;
                    break;
                case '>':
                    if(k>mx)
                        res = 0;
                    else if(k<mn)
                        res = sum2;
                    else
                    {
                        ll *ptr = lower_bound(a,a+n1,k);
                        if(*ptr==k)
                            res = sum2 - c[k].first - c[k].second;
                        else
                        {
                            res = sum2 - c[*ptr].second;
                        }
                    }
                    break;
                case '<':
                    if(k<mn)
                        res = 0;
                    else if(k>mx)
                        res = sum2;
                     else
                    {
                        ll *ptr = lower_bound(a,a+n1,k);
                        if(*ptr==k)
                            res = c[k].second;
                        else
                        {
                            ptr--;
                            res = c[*ptr].first + c[*ptr].second;
                        }
                    }
                    break;
            }
        if(res&1)
        {
            st[q++] = ch1;
        }
        else
        {
            st[q++] = ch1=='D'?'C':'D';
        }
    }
    st[q] = '\0';
    puts(st);
    return 0;
}
