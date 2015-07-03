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

/*long long gcd(long long a,long long b)
{
	while(b)
		b ^= a ^= b ^= a %= b;
	return a;
}*/

int main()
{
    long n,n1,n2,n3;
    long temp;
    scanf("%ld %ld %ld",&n1,&n2,&n3);
    n = n1+n2+n3;
    long a[1000001]={0},b[1000001]={0};
    while(n--)
    {
        scanf("%ld",&temp);
        a[temp]++;
    }
    long ans=0;
    for(long i=0;i<1000001;i++)
        if(a[i]>=2)
            {
                b[ans]=i;
                ans++;
            }
    printf("%ld",ans);
    for(long i=0;i<ans;i++)
        printf("\n%ld",b[i]);
	return 0;
}
