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

int dp[205][205];
char a[205];
int s[205];

int solve(int i,int j)
{
    if(dp[i][j]!=-1)
        return dp[i][j];

    if(i==j)
    {
        return dp[i][j] = s[i]-s[i-1];
    }


    if(s[j] - s[i-1] > (j-i+1)/2)
        return dp[i][j] = j-i+1;
    int k;
    dp[i][j] = 0;
    fin(k,i,j-1)
    {
        dp[i][j] = max(dp[i][j],solve(i,k)+solve(k+1,j));
    }
    return dp[i][j];
}

int main()
{
    int t,i,j,n;
    sd(t);
    while(t--)
    {
        sd(n);
        scanf("%s",a);
        s[0]=0;
        fin(i,1,n)
            {
                s[i]=s[i-1];
                if(a[i-1]=='1')
                    s[i]++;
            }
        fin(i,0,n)
            fin(j,0,n)
                dp[i][j]=-1;
        int res = solve(1,n);
        pd(res);
        pn;
    }
    return 0;
}
