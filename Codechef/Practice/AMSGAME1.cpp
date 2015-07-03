#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <string>
#include <math.h>
 
using namespace std;
 
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
	int t,n,a[1000];
	cin>>t;
	while(t--)
	{
	    cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n==1)
        {
            cout<<a[0]<<endl;
        }
        else
        {
            int res = gcd(a[0],a[1]);
            for(int i=2;i<n;i++)
                res = gcd(res,a[i]);
            cout<<res<<endl;
        }
	}
	return 0;
}