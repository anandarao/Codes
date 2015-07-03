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
    int t;
    char str[1005];
    scanf("%d",&t);
    while(t--)
    {
        int a[26]={};
        int b[26]={};
        for(int i=0;i<26;i++)
            a[i]=b[i]=0;
        scanf(" %s",str);
        int n=strlen(str);
        for(int i=0;i<n/2;i++)
            a[str[i]-97]++;
        n = n%2==0?n:n+1;
        for(int i=n/2;i<n;i++)
            b[str[i]-97]++;
        int flag=1;
        for(int i=0;i<26;i++)
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}
