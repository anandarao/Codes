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
    long long t,n;
    long long mem,temp,res;
    scanf("%lld",&t);
    while(t--)
    {
        res = 0;
        mem = 0;
        scanf("%lld",&n);
        while(n--)
        {
            scanf("%lld",&temp);
            res += max((long long)0,temp-mem);
            mem = temp;
        }
        printf("%lld\n",res);
    }
}