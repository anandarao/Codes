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

char a[1010][1010];
int t[1010][1010],l[1010][1010],r[1010][1010],b[1010][1010];

int main()
{
    int k,n,m,i,j;
    sd(k);
    while(k--)
    {
        sd(n);
        sd(m);
        fin(i,0,n-1)
            ss(a[i]);
        bool flag = true;
        int c = 0;
        fin(i,0,n-1)
        {
            if(flag)
                fin(j,0,m-1)
                {
                    t[i][j] = a[i][j]=='*'?1:0;
                    if(a[i][j]=='*')
                    {
                        flag = false;
                        c = 2;
                    }
                }
            else
            {
                fin(j,0,m-1)
                {
                    t[i][j] = c;
                }
                c++;
            }
        }
        flag = true;
        c = 0;
        fin(j,0,m-1)
        {
            if(flag)
                fin(i,0,n-1)
                {
                    l[i][j] = a[i][j]=='*'?1:0;
                    if(a[i][j]=='*')
                    {
                        flag = false;
                        c = 2;
                    }
                }
            else
            {
                fin(i,0,n-1)
                {
                    l[i][j] = c;
                }
                c++;
            }
        }
        flag = true;
        c = 0;
        fde(i,0,n-1)
        {
            if(flag)
                fde(j,0,m-1)
                {
                    b[i][j] = a[i][j]=='*'?1:0;
                    if(a[i][j]=='*')
                    {
                        flag = false;
                        c = 2;
                    }
                }
            else
            {
                fde(j,0,m-1)
                {
                    b[i][j] = c;
                }
                c++;
            }
        }
        flag = true;
        c = 0;
        fde(j,0,m-1)
        {
            if(flag)
                fde(i,0,n-1)
                {
                    r[i][j] = a[i][j]=='*'?1:0;
                    if(a[i][j]=='*')
                    {
                        flag = false;
                        c = 2;
                    }
                }
            else
            {
                fde(i,0,n-1)
                {
                    r[i][j] = c;
                }
                c++;
            }
        }
        int res = INT_MAX;
        fin(i,0,n-1)
        {
            fin(j,0,m-1)
            {
                res = min(res,max(t[i][j],max(r[i][j],max(b[i][j],l[i][j]) )));
            }
        }
        pd(res);
        pn;
    }
    return 0;
}
