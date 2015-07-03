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
	int n,res=0;
	cin>>n;
	int x[3],y[3];
	while(n--)
    {
        long long a[3];
        for(int i=0;i<3;i++)
            cin>>x[i]>>y[i];
        a[0] = pow(abs(x[0]-x[1]),2) + pow(abs(y[0]-y[1]),2);
        a[1] = pow(abs(x[1]-x[2]),2) + pow(abs(y[1]-y[2]),2);
        a[2] = pow(abs(x[2]-x[0]),2) + pow(abs(y[2]-y[0]),2);
        //cout<<a[0]<<a[1]<<a[2]<<endl;
        long long *h = max_element(a,a+3);
        int flag = h-&a[0];
        long long sum = 0;
        for(int i=0;i<3;i++)
            if(i!=flag)
                sum+=a[i];
        //cout<<*h<<sum<<endl;
        if(sum==*h)
            res++;
    }
    cout<<res;
	return 0;
}