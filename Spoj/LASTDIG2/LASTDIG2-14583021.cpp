#include <bits/stdc++.h>
using namespace std;
#define ll long long unsigned
#define slld(a) scanf("%llu",&a)
ll pow_mod(ll a,ll b)
{
    ll res = 1;
    a %= 10;
    while(b)
    {
        if(b&1)
            res = (res * a)%10;
        a = (a * a)%10;
        b /= 2;
    }
    return res;
}
int main()
{
    ll t;
    slld(t);
    char a[1010];
    ll b;
    while(t--)
    {
       	scanf("%s",a);
        slld(b);
        printf("%llu\n",pow_mod(a[strlen(a)-1]-'0',b));
    }
    return 0;
}