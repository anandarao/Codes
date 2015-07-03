#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 100006
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n-1;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair;
#define pb push_back;

int main()
{	
	int t = 1;
	char s[2004];
	while(1)
	{
		scanf(" %s",s);
		if(strlen(s) == 0)
		{
			printf("%d. 0\n",t);
			t++;
			continue;
		}
		else if(s[0]=='-')
		{
			break;
		}
		else
		{
			int c = 0;
			int res = 0;
			for(int i=0;s[i]!='\0';i++)
			{
				if(s[i]=='{')
				{
					c++;
				}
				else
				{
					if(c==0)
					{
						c++;
						res++;
					}
					else
					{
						c--;
					}
				}
			}
			res += c/2;
			printf("%d. %d\n",t,res);
			t++;
		}
	}
	return 0;
}