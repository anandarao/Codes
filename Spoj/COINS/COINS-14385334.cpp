#include <bits/stdc++.h>

using namespace std;

map<long long , long long> m;

long long solve(long long n)
{
	if(m.count(n))
		return m[n];
	else 
		return m[n] = max(n,solve(n/2)+solve(n/3)+solve(n/4));
}

int main()
{
	long long n;
	for(int i=0;i<12;i++)
		m[i] = i;
	while(scanf("%lld",&n)!=EOF)
	{
		printf("%lld\n",solve(n));
	}
	return 0;
}