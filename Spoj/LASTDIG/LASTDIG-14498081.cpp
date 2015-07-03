#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define l long
#define slld(a) scanf("%lld",&a)
#define plld(a) printf("%lld\n",a)
int main()
{
	ll t;
	slld(t);
	ll a,b;
	ll res;
	while(t--)
	{	
		slld(a);
		slld(b);
		res = 1;
		a %= 10;
		while(b)
		{
			if(b&1)
				res = (res*a)%10;
			b>>=1;
			a = (a*a)%10;
		}
		plld(res);
	}
	return 0;
}