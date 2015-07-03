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
    int t,n,i;
    long long s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %lld",&n,&s);
        s-=n;
        int i=1;
        while(s)
        {
            s-=i;
            if(s<0)
                break;
            i++;
        }
        printf("%d\n",n-i);
    }
}