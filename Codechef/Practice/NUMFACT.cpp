#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		long long a[1000001]={0};
		long long res = 1,temp,i;
		while(n--)
		{
			scanf("%lld",&temp);
			while(temp % 2 == 0)
			{
				a[2]++;
				temp/=2;
			}
			for(i=3;i<=sqrt(temp);i+=2)
			{
				while(temp%i==0)
				{
					a[i]++;
					temp/=i;
				}
			}
			if(temp>2)
				a[temp]++;
		}
		for(i=0;i<1000001;i++)
			res *= (a[i]+1);
		printf("%lld\n",res);
	}
	return 0;
} 