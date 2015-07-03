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
    int t,r;
    long long x[3],y[3];
    float a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&r);
        for(int i=0;i<3;i++)
            scanf("%lld %lld",&x[i],&y[i]);
        a = pow(abs(x[0]-x[1]),2) + pow(abs(y[0]-y[1]),2);
        b = pow(abs(x[1]-x[2]),2) + pow(abs(y[1]-y[2]),2);
        c = pow(abs(x[2]-x[0]),2) + pow(abs(y[2]-y[0]),2);
 
        bool f1 = a <= pow(r,2);
        bool f3 = b <= pow(r,2);
        bool f2 = c <= pow(r,2);
 
        if( (f1 && f2) || (f1 && f3) || (f2 && f3) )
            printf("yes\n");
        else
            printf("no\n");
 
    }
	return 0;
}