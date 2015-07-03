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
    int t;
    char str[100005];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %s",str);
        if(strstr(str,"010")!=NULL || strstr(str,"101")!=NULL)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}
