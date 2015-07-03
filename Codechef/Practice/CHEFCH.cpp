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
    char s[100005];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %s",s);
        int n=strlen(s);
        map<char,int> m1;
        m1['+']=1;
        m1['-']=0;
        int flag = 1;
        int i;
        int a=0,b=0;
        for(i=0;i<n;i++)
        {
            //cout<<flag;
            a+= abs(flag - m1[s[i]]);
            if(flag)
                flag=0;
            else
                flag=1;
        }
        //cout<<endl;
        flag=0;
        for(i=0;i<n;i++)
        {
            //cout<<flag;
            b+= abs(flag - m1[s[i]]);
            if(flag)
                flag=0;
            else
                flag=1;
        }
        //cout<<endl;
        //cout<<a<<b;
        //cout<<endl;
        printf("%d\n",a<b?a:b);
    }
    return 0;
}