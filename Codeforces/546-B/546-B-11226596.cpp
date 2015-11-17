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
    int n,temp;
    cin>>n;
    map<int,int> m;
    for(int i =0;i<n;i++)
    {
        cin>>temp;
        if(m.count(temp))
            m[temp]++;
        else
            m[temp] = 1;
    }
    long long res = 0;
    for(int i = 1;i<=n;i++)
    {
        if(m.count(i))
        {
            if(m[i]>1)
            {
                for(int j = i+1;j<=n;j++)
                {
                    if(!m.count(j))
                    {
                        m[i]--;
                        m[j]=1;
                        res += j-i;
                        if(m[i]==1)
                            break;
                    }
                }
            }
        }
    }
    int num = n;
    for(int i = 1;i<=n;i++)
    {
        if(m.count(i))
        {
            if(m[i]>1)
            {
                int x = m[i]-1;
                long term = (x*(x+1))/2;
                res += x*(num-i) + term;
                num+=x;
            }
        }
    }
    cout<<res;
    return 0;
}