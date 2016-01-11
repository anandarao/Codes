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

multiset<int> m;
int a[MAX];

int main()
{
    int t,n,k,m1,i,b;
    sd(t);
    while(t--)
    {
        sd(n);
        sd(k);
        sd(m1);
        fin(i,0,n-1)
        {
            sd(a[i]);
        }
        fin(i,0,n-1)
        {
            sd(b);
            a[i] -= b;
        }
        fin(i,1,k)
        {
            sd(b);
            m.insert(b);
        }
        fin(i,1,m1)
        {
            sd(b);
            m.insert(b);
        }
        sort(a,a+n);
        int res = 0;
        fin(i,0,n-1)
        {
            multiset<int>::iterator it;
            it = m.lower_bound(a[i]);
            //pd(*it);
            if(*it == a[i])
            {
                m.erase(it);
            }
            else
            {
                if(it!=m.begin())
                {
                    it--;
                    res += a[i] - *it;
                    m.erase(it);
                }
                else
                {
                    res += a[i];
                }
            }
        }
        pd(res);
        pn;
        m.clear();
    }
    return 0;
}
