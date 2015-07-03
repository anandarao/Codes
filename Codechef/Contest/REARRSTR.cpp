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
    int t,i,n;
    char str[100002],ans[100002];
    scanf("%d",&t);
    while(t--)
    {
        pair<int,int> c[26];
        scanf(" %s",str);
        n = strlen(str);
        for(i=0;i<26;i++)
        {
            c[i].first = 0;
            c[i].second = i;
        }
        for(i=0;i<n;i++)
        {
            (c[str[i]-97].first)++;
        }
        sort(c,c+26);
        //for(i=0;i<26;i++)
        //{
         //   printf("%d",c[i].first);
        //    printf("%d",c[i].second);
        //}
        if( c[25].first > (n%2?n/2+1:n/2) )
            printf("-1\n");
        else
        {
            int pos = 0;
            for(i=25;i>=0;i--)
            {
                while(c[i].first)
                {
                    ans[pos] = c[i].second + 97;
                    pos += 2;
                    if(pos>=n)
                        pos=1;
                    c[i].first--;
                }
            }
            ans[n]='\0';
            printf("%s\n",ans);
        }
    }
    return 0;
}
