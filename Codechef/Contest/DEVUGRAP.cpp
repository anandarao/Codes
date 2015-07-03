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

int main()
{
    int t,n;
    long long k,temp,res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %lld",&n,&k);
        res = 0;
        while(n--)
        {
            scanf("%lld",&temp);
            if(temp>=k)
            {
                temp = temp % k;
                res += min(temp,k-temp);
            }
            else
                res += k - temp;
        }
        printf("%lld\n",res);
    }
    return 0;
}