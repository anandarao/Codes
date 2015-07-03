#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 1000000
#define MOD 1000000007

#define fin(a,n) for(int i=a;i<n;i++)
#define fde(a,n) for(int i=n-1;i>=a;i--)

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

int all_nine(string a)
{
	fin(0,a.size())
	{
		if(a[i]!='9')
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	ll n;
	sd(t);
	while(t--)
	{
		string a;
		cin>>a;
		n = a.size();
		if (all_nine(a))
		{
			pd(1);
			fin(1,n)pd(0);
			pd(1);
			pn;
			continue;
		}
		int i,j;
		if(n & 1)
		{
			i = n/2 - 1;
			j = n/2 + 1;
		}
		else
		{
			i = n/2 - 1;
			j = n/2;
		}
		int flag = 0;
		while(i>=0 && j<=n)
		{
			if(a[i] != a[j])
				break;
			i--;
			j++;
		}
		if(i<0 || a[i]<a[j])
			flag = 1;
		while(i>=0 && j<=n)
		{
			a[j] = a[i];
			i--;
			j++;
		}
		if (flag)
    	{
        	int carry = 1;
        	i = n/2 - 1;
        	if (n & 1)
        	{
            	a[n/2] += carry;
            	carry = (a[n/2]-48)/ 10;
            	a[n/2]= (a[n/2]-48)%10 + 48;
            	j = n/2 + 1;
        	}
        	else
            	j = n/2;
        	while (i >= 0 && j<=n)
        	{
            	a[i] += carry;
            	carry = (a[i]-48) / 10;
            	a[i]= (a[i]-48)%10 + 48;
            	a[j] = a[i];
            	i--;
            	j++;
        	}
    	}
    	cout<<a<<endl;
	}
	return 0;
}