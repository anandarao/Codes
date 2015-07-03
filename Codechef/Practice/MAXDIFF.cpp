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

/*long long pow_mod(ll x, ll y, ll z)
{
    ll number = 1;
    while (y)
    {
        if (y & 1)
            number = number * x % z;
        y >>= 1;
        x = (ll)x * x % z;
    }
    return number;
}*/

/*ll gcd(ll a,ll b)
{
	while(b)
		b ^= a ^= b ^= a %= b;
	return a;
}*/

int main()
{
    int t,n,k,i;
    int a[100004];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int m = min(n-k,k);
        long long ans = 0;
        for(i=n-1;i>=m;i--)
            ans += a[i];
        for(;i>=0;i--)
            ans -= a[i];
        printf("%lld\n",ans);
    }
    return 0;
}
