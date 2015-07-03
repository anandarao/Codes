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
 
using namespace std;
 
struct book
{
    long ex;
    char name[20];
};
 
int main()
{
    long n,j,i,c = 0,res,s;
    struct book temp;
    scanf("%ld",&n);
 
    vector<struct book> v;
    long small[n+1];
    while(n--)
    {
        scanf("%ld",&i);
        if(i != -1)
        {
            temp.ex = i;
            scanf(" %s",temp.name);
            if (i==0)
                continue;
            if(c == (int)v.size())
            {
                v.push_back(temp);
                if(c == 0)
                    small[0] = temp.ex;
                else if(small[c-1]>temp.ex)
                    small[c] = temp.ex;
                else
                    small[c] = small[c-1];
                c++;
            }
            else
            {
                v[c]=temp;
                if (c==0)
                    small[0] = temp.ex;
                else if(small[c-1]>temp.ex)
                    small[c] = temp.ex;
                else
                    small[c] = small[c-1];
                c++;
            }
        }
        else
        {
            j = 0;
            s = small[c-1];
            for(i = c-1; i >= 0 ; i--)
                {
                    if(s == v[i].ex)
                        break;
                    j++;
                }
            res = c - 1 - i;
            printf("%ld %s\n",res,v[i].name);
            c = c - res - 1;
        }
    }
    return 0;
} 