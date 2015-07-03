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
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        int ca=0,cb=0;
        while(a)
        {
            ca += a%2;
            a /= 2;
        }
        while(b)
        {
            cb += b%2;
            b /= 2;
        }
        int diff = abs(n-ca-cb);
        int ans = pow(2,n) - 1;
        for(int i=0;i<diff;i++)
            ans -= pow(2,i);
        cout<<ans<<endl;
    }
    return 0;
}
