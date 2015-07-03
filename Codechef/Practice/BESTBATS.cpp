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
 
int main()
{
	int t,a[11],k;
	cin>>t;
	while(t--)
    {
        for(int i=0;i<11;i++)
            cin>>a[i];
        cin>>k;
        sort(a,a+11);
        int n = count(a,a+11,a[11-k]);
        int r = count(a+11-k,a+11,a[11-k]);
        //cout<<n<<r<<endl;
        int res = 1;
        for(int i = n;i>r;i--)
            res *= i;
        for(int i=n-r;i>1;i--)
            res /= i;
        cout<<res<<endl;
    }
    return 0;
}