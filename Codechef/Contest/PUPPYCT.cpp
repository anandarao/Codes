#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 10003
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


int main()
{
    int t;
    ll i,j;
    ll n,k,x,y,res;
    sd(t);
    while(t--)
    {
        slld(n);
        slld(k);
        res = n*n;
        if(n>1000)
        {
            if(k==1)
            {
                slld(x);
                slld(y);
                ll x1[2],y1[2];
                int i=0;
                if(1-x+y <=n && 1-x+y >=1)
                    {
                        x1[i] = 1;
                        y1[i] = 1-x+y;
                        i++;
                    }
                else if(n-x+y <=n && n-x+y>=1)
                    {
                        x1[i] = n;
                        y1[i] = n-x+y;
                        i++;
                    }
                if(1-y+x <=n && 1-y+x >=1)
                    {
                        x1[i] = 1-y+x;
                        y1[i] = 1;
                        i++;
                    }
                else if(n-y+x <=n && n-y+x>=1)
                    {
                        x1[i] = n-y+x;
                        y1[i] = n;
                        i++;
                    }
                res -= max( abs(x1[1]-x1[0]), abs(y1[1]-y1[0]) );
                i=0;
                if(x+y-1 <=n && x+y-1 >=1)
                    {
                        x1[i] = 1;
                        y1[i] = x+y-1;
                        i++;
                    }
                else if(x+y-n <=n && x+y-n>=1)
                    {
                        x1[i] = n;
                        y1[i] = x+y-n;
                        i++;
                    }
                if(x+y-1 <=n && x+y-1 >=1)
                    {
                        x1[i] = x+y-1;
                        y1[i] = 1;
                        i++;
                    }
                else if(x+y-n <=n && x+y-n>=1)
                    {
                        x1[i] = x+y-n;
                        y1[i] = n;
                        i++;
                    }
                res -= max( abs(x1[1]-x1[0]), abs(y1[1]-y1[0]) );
                res--;
            }
            plld(res);
            pn;
        }
        else
        {
        bool **a = new bool*[n+1];
        fin(i,0,n)
            a[i] = new bool[n+1];
        fin(i,1,n)
            fin(j,1,n)
                a[i][j]=false;
        while(k--)
        {
            slld(x);
            slld(y);
            for(i=x,j=y;i<=n && j<=n;i++,j++)
                if(a[i][j]==false)
                {
                    res--;
                    a[i][j]=true;
                }
            for(i=x,j=y;i<=n && j>=1;i++,j--)
                if(a[i][j]==false)
                {
                    res--;
                    a[i][j]=true;
                }
            for(i=x,j=y;i>=1 && j<=n;i--,j++)
                if(a[i][j]==false)
                {
                    res--;
                    a[i][j]=true;
                }
            for(i=x,j=y;i>=1 && j>=1;i--,j--)
                if(a[i][j]==false)
                {
                    res--;
                    a[i][j]=true;
                }
        }
        plld(res);
        pn;
        }
    }
    return 0;
}
