#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <math.h>
#include <cmath>
 
using namespace std;

long long gcd(long long a,long long b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    int t,n,l,r,q,i,a[100005],gcdl[100005],gcdr[100005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        gcdl[0]=a[0];
        for(i=1;i<n;i++)
            gcdl[i]=gcd(gcdl[i-1],a[i]);
        gcdr[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
            gcdr[i]=gcd(gcdr[i+1],a[i]);
        while(q--)
        {
            scanf("%d %d",&l,&r);
            l--;r--;
            if(l==0)
                printf("%d\n",gcdr[r+1]);
            else if(r==n-1)
                printf("%d\n",gcdl[l-1]);
            else
                printf("%lld\n",gcd(gcdl[l-1],gcdr[r+1]));
        }
    }
    return 0;
}