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

string a;

int main()
{
    int t,i,n;
    sd(t);
    while(t--)
    {
        int c[26] = {0};
        cin>>a;
        fin(i,0,a.size()-1)
            c[a[i]-'a']++;
        cin>>a;
        fin(i,0,a.size()-1)
            c[a[i]-'a']++;
        sd(n);
        bool flag = true;
        while(n--)
        {
            cin>>a;
            if(flag)
                fin(i,0,a.size()-1)
                    {
                        c[a[i]-'a']--;
                        if(c[a[i]-'a']<0)
                        {
                            flag = false;
                            break;
                        }
                    }
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
