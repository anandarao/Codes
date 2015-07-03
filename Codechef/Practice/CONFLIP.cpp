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
    int t,g,i,q;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&g);
        while(g--)
        {
            scanf("%d %lld %d",&i,&n,&q);
            if(n&1)
            {
                if(i==q)
                    printf("%lld\n",n/2);
                else
                    printf("%lld\n",n/2+1);
            }
            else
                printf("%lld\n",n/2);
        }
    }
    return 0;
}