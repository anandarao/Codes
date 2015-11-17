//#include <iostream>
//#include <algorithm>
#include <stdio.h>
//#include <stack>
//#include <queue>
//#include <vector>
//#include <set>
#include <string.h>
//#include <map>
#include <cmath>

using namespace std;

int main()
{
    int flag[100001],n,i,j,sum=0;
    char a[100002],b[100002];
    scanf(" %s",a);
    scanf(" %s",b);
    n = strlen(a);
    for(i = 0; i<n; i++)
    {
        flag[i] = abs(a[i] - b[i]);
        sum += flag[i];
    }
    if(sum % 2 == 1)
        printf("impossible");
    else
    {
        j = 0;
        for(i = 0; i<n;i++)
        {
            if(flag[i])
            {
                if(j)
                {
                    printf("%c",a[i]);
                    j = 0;
                }
                else
                {
                    printf("%c",b[i]);
                    j = 1;
                }
            }
            else
            {
                printf("%c",a[i]);
            }
        }
    }
}