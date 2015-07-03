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
    char s[1003];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf(" %s",s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='Y')
            {
                printf("NOT INDIAN\n");
                break;
            }
            else if(s[i]=='I')
            {
                printf("INDIAN\n");
                break;
            }
        }
        if(i==n)
            printf("NOT SURE\n");
    }
    return 0;
}