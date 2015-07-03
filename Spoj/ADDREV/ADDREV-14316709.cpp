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
    int t;
    char a[100005],b[100005];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %s %s",a,b);
        int n1 = strlen(a);
        int n2 = strlen(b);
        int c[n1],d[n2],s[max(n1,n2)+1];
        for(int i=0;i<n1;i++)
            c[i] = a[i]-48;
        for(int i=0;i<n2;i++)
            d[i] = b[i]-48;
        int carry = 0;
        for(int i=0;i<min(n1,n2);i++)
        {
            s[i] = c[i]+d[i]+carry;
            carry=0;
            if(s[i]>=10)
            {
                s[i] %= 10;
                carry = 1;
            }
        }
        int flag;
        if(min(n1,n2)==n1)
            flag=0;
        else
            flag=1;
        if(!flag)
        {
            for(int i=min(n1,n2);i<max(n1,n2);i++)
            {
                s[i] = d[i]+carry;
                carry = 0;
                if(s[i]>=10)
                {
                    s[i] %= 10;
                    carry = 1;
                }
            }
            if(carry==1)
                s[max(n1,n2)]=1;
        }
        else
        {
            for(int i=min(n1,n2);i<max(n1,n2);i++)
            {
                s[i] = c[i]+carry;
                carry = 0;
                if(s[i]>=10)
                {
                    s[i] %= 10;
                    carry = 1;
                }
            }
        }
        flag = 0;
        for(int i=0;i<max(n1,n2);i++)
        {
            if(flag==0 && s[i]==0)
            {
                continue;
            }
            else
            {
                flag = 1;
            }
            printf("%d",s[i]);
        }
        if(carry==1)
            printf("1");
        printf("\n");
    }
    return 0;
}
