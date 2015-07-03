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
    char s1[25001],s2[25001];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %s %s",s1,s2);
        int n1 = strlen(s1),n2 = strlen(s2);
        if(n1==n2)
        {
            if(!strcmp(s1,s2))
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if(n1>n2)
                {
                    swap(s1,s2);
                    swap(n1,n2);
                }
            int p=0,i;
            for(i=0;i<n1;i++)
            {
                char *j = find(s2+p,s2+n2,s1[i]);
                //printf("%c",*j);
                if(*j=='\0')
                    break;
                p = j-&s2[0] + 1;
                //printf("%d",p);
            }
            if(i==n1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
