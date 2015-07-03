#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 314160
#define MOD 1000007

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

int main()
{
    int t,n;
    sd(t);
    string s;
    while(t--)
    {
        map<string,int> m;
        m["TTT"]=0;
        m["TTH"]=0;
        m["THT"]=0;
        m["THH"]=0;
        m["HTT"]=0;
        m["HTH"]=0;
        m["HHT"]=0;
        m["HHH"]=0;
        sd(n);
        cin>>s;
        for(int i=0;i<=37;i++)
        {
            m[s.substr(i,3)]++;
        }
        map<string,int>::iterator it;
        it = m.end();
        it--;
        pd(n);
        ps;
        for(;it!=m.begin();it--)
        {
            pd(it->second);
            ps;
        }
        pd(it->second);
        pn;
    }
    return 0;
}
