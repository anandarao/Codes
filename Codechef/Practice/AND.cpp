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
    int n,i;
    long long temp;
    long long c[32];
    for(i = 0 ; i < 32 ; i++)
        c[i]=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&temp);
        i=0;
        while(temp)
        {
            if(temp%2)
                c[i]++;
            i++;
            temp/=2;
        }
    }
    long long res = 0;
    for(i=0;i<32;i++)
    {
        res += c[i]*(c[i]-1)*pow(2,i-1);
    }
    printf("%lld",res);
    return 0;
}