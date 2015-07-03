#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <string>
#include <math.h>
 
using namespace std;
 
int main()
{
	int t,n,temp,a,b;
	cin>>t;
	while(t--)
    {
        cin>>n;
        cin>>a;
        cin>>b;
        if(a>b)
            swap(a,b);
        n -= 2;
        while(n--)
        {
            cin>>temp;
            if(temp<=a)
            {
                b=a;
                a=temp;
            }
            else if(temp<b)
                b=temp;
        }
        cout<<a+b<<endl;
    }
}