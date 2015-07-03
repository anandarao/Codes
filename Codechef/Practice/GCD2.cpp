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

long long gcd(long long a,long long b)
{
	while(b)
		b ^= a ^= b ^= a %= b;
	return a;
}

int main()
{
    long int t,a,r;
    string b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0)
            cout<<b<<endl;
        else
        {
            r=0;
            for(int i=0;i<b.length();i++)
                r = (r*10 + b[i]-48)%a;
            cout<<gcd(a,r)<<endl;
        }
    }
    return 0;
}
