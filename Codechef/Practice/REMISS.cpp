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
    int t;
    long long a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        printf("%lld %lld\n",max(a,b),a+b);
    }
    return 0;
}