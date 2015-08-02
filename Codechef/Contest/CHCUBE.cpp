#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
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
    map<string,int> m;
    string a[7];
    int t;
    sd(t);
    while(t--)
    {
        m.clear();
        int i;
        string s;
        for(i=1;i<=6;i++)
        {
            cin>>s;
            m[s]++;
            a[i] = s;
        }
        map<string,int>::iterator it;
        bool flag = false;
        for(it=m.begin();it!=m.end();it++)
        {
            if((it->second)>=3)
            {
                s = it->first;
                if( (a[5]==s||a[6]==s) && ( (a[1]==s&&a[3]==s) || (a[2]==s&&a[3]==s) || (a[2]==s&&a[4]==s) || (a[4]==s&&a[1]==s) ))
                   {
                       flag = true;
                       break;
                   }
            }
        }
        if(flag)
            printf("YES");
        else
            printf("NO");
        pn;
    }
    return 0;
}
