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
 
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
 
int main()
{
    int t,n,a[51];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int g = gcd(a[0],a[1]);
        for(int i=2;i<n;i++)
        {
            g = gcd(g,a[i]);
            if(g==1)
                break;
        }
        for(int i=0;i<n;i++)
            cout<<a[i]/g<<" ";
        cout<<endl;
    }
}