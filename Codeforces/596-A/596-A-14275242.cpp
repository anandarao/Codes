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

int main()
{
    int n,i;
    pair<int,int> p[4];
    sd(n);
    fin(i,0,n-1)
    {
        sd(p[i].first);
        sd(p[i].second);
    }
    if(n==1)
        printf("-1");
    else if(n==2)
    {
        if(p[0].first == p[1].first || p[0].second == p[1].second)
            printf("-1");
        else
            printf("%d",abs((p[1].first-p[0].first)*(p[1].second-p[0].second)));
    }
    else if(n==3)
    {
        sort(p,p+n);
        int area1 = abs((p[1].first-p[0].first)*(p[1].second-p[0].second));
        int area2 = abs((p[1].first-p[2].first)*(p[1].second-p[2].second));
        int area3 = abs((p[2].first-p[0].first)*(p[2].second-p[0].second));
        printf("%d",max(area1,max(area2,area3)));
    }
    else
    {
        sort(p,p+n);
        printf("%d",abs((p[3].first-p[0].first)*(p[3].second-p[0].second)));
    }
    return 0;
}