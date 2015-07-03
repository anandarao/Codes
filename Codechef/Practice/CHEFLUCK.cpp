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
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long n1;
        long long b=0;
        int flag=0;
        while(4*b <= n)
        {
            n1 = n - 4*b;
            if(n1%7==0)
            {
                flag=1;
                break;
            }
            b++;
        }
        if(flag)
            cout<<n1<<endl;
        else
            printf("-1\n");
    }
    return 0;
}