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

pair<int,int> xpos[105];
pair<int,int> xneg[105];

int main()
{
    int n,temp,i;
    int neg=0,pos=0;
    sd(n);
    while(n--)
    {
        sd(temp);
        if(temp<0)
        {
            xneg[neg].first=-temp;
            sd(temp);
            xneg[neg].second=temp;
            neg++;
        }
        else
        {
            xpos[pos].first=temp;
            sd(temp);
            xpos[pos].second=temp;
            pos++;
        }
    }
    sort(xpos,xpos+pos);
    sort(xneg,xneg+neg);
    ll res = 0;
    if(pos>=neg)
    {
        fin(i,0,neg-1)
            res += xneg[i].second + xpos[i].second;

        if(pos>neg)
            res += xpos[i].second;
    }
    else
    {
        fin(i,0,pos-1)
            res += xpos[i].second + xneg[i].second;

        res += xneg[i].second;
    }
    plld(res);
    return 0;
}