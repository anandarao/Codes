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

char a[2][2*MAX];

int check(int flag,int n)
{
    int i,res = 0;
    fin(i,0,n-2)
        {
            if(a[flag][i+1]=='.')
                continue;
            else
            {
                res++;
                flag = 1 - flag;
                if(a[flag][i+1]=='.')
                    {
                        continue;
                    }
                else
                    return -1;

            }
        }
        return res;
}

int main()
{
    int t;
    sd(t);
    int res1,res2,n,flag,i;
    while(t--)
    {
        scanf(" %s",a[0]);
        scanf(" %s",a[1]);
        n = strlen(a[0]);
        if(a[0][0]=='#' && a[1][0]=='#')
        {
            printf("No");
            pn;
            continue;
        }
        if(a[0][0]=='.' && a[1][0]=='.')
            {
                res1 = check(0,n);
                res2 = check(1,n);
            }
        else if(a[1][0]=='.')
            {
                res2 = check(1,n);
                res1 = 200009;
            }
        else if(a[0][0]=='.')
            {
                res1 = check(0,n);
                res2 = 200009;
            }

        if(res1==-1 || res2==-1)
        {
            printf("No");
            pn;
        }
        else
        {
            printf("Yes");
            pn;
            pd(min(res1,res2));
            pn;
        }
    }
    return 0;
}
