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
    int t,n,temp;
    scanf("%d",&t);
    while(t--)
    {
        set<int> s;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&temp);
            s.insert(temp);
        }
        printf("%u\n",s.size());
    }
    return 0;
}
