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
    int t,i,j;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        j = sqrt(n);
        for(i=j;i>=1;i--)
            if(n % i==0)
                break;
        cout<<n/i - i<<endl;
    }
    return 0;
}
