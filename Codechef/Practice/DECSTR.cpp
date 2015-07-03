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
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        int n = k/25 , p = k%25,i;
        if(p)
            for(i=p;i>=0;i--)
                printf("%c",i+97);
        for(i=0;i<n;i++)
            for(int j=25;j>=0;j--)
                printf("%c",j+97);
        printf("\n");
    }
    return 0;
}
